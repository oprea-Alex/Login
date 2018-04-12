#ifndef CAPLICATIACLIENT_H
#define CAPLICATIACLIENT_H
#pragma once
#include <QDialog>
#include "ipachetinstructiuni.h"

namespace Ui {
class CAplicatiaClient;
}

class CAplicatiaClient : public QDialog
{
    Q_OBJECT

public:
    explicit CAplicatiaClient(QWidget *parent = 0);
    ~CAplicatiaClient();

private:
    Ui::CAplicatiaClient *ui;
    //std::array<iPachetInstructiuni*> Instructiuni;
};

#endif // CAPLICATIACLIENT_H
