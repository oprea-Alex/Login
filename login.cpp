#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/SQLite/Credentiale.db");
    if(!db.open()) ui->label->setText("Failed to open!");
    else ui->label->setText("Connected!");
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_clicked()
{
    QString nume_cont,parola,nr_tel;
    nume_cont = ui->lineEdit_nume_cont->text();
    parola = ui->lineEdit_parola->text();

    if(!db.isOpen()){
        qDebug()<<"Failed to open DB!\n";
        return;
    }

    QSqlQuery qry;

    if(qry.exec("select * from Login where Nume_cont='"+nume_cont +"' and Parola='" +parola+"'")){
        int count = 0;
        while(qry.next()) count ++;
        if(count == 1){
            ui->label->setText("Nume si parola corecte.");
            this->hide();
            CAplicatiaClient AppClient;
            AppClient.setModal(true);
            AppClient.exec();
        }
        if(count<1)
            ui->label->setText("Nume si parola incorecte.");
    }



}
