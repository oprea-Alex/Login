#ifndef CFIRDEEXECUTIE_H
#define CFIRDEEXECUTIE_H

#include <QThread>

class CFirDeExecutie : public QThread
{
public:
    CFirDeExecutie();
    void run();
};

#endif // CFIRDEEXECUTIE_H
