#ifndef CMESAJ_H
#define CMESAJ_H
#pragma once
#include <iostream>

class CMesaj{
    std::string s_continut;

public:
    CMesaj();
    CMesaj(const std::string&);
    //destructor default
    const std::string& get_continut() const{
        return this->s_continut;
    }
    void set_continut(const std::string& x){
        this->s_continut = x;
    }
    void afisare_mesaj() const{
        std::cout << this->s_continut << std::endl;
    }
};

#endif // CMESAJ_H
