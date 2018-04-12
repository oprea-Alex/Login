#ifndef CBAZADEDATE_H
#define CBAZADEDATE_H

#include <QSqlDatabase>
#include "ctabela.h"

class CBazaDeDate : public QSqlDatabase
{
public:
    CBazaDeDate();
    void incarca();
    void initializeaza();
};

#endif // CBAZADEDATE_H
