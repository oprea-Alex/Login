#ifndef IPACHETINSTRUCTIUNI_H
#define IPACHETINSTRUCTIUNI_H
#pragma once

#include <iostream>

typedef enum{
    Default,
    Interogare_credentiale,
    Trimite_toate_mailurile,
    Adauga_mailul_utilizatorului,
    Sterge_mailul_utilizatorului
}Tip_Pachet;

class iPachetInstructiuni
{
    Tip_Pachet eTip;
    std::string sInstructiune;

public:
    iPachetInstructiuni(){
        this->eTip = Default;
        this->sInstructiune = "N/A";
    }
    //iPachetInstructiuni(const eTip& _tip, const std::string& _instr) : eTip(_tip), sInstructiune(_instr){}
    //destr default

    //TO DO - SETTERE SI GETTERE

    virtual bool execute() = 0;

};

#endif // IPACHETINSTRUCTIUNI_H
