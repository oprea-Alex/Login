#ifndef CEMAIL_H
#define CEMAIL_H
#pragma once

#include <iostream>
#include "cmesaj.h"

class CEmail : public CMesaj{

    std::string sExpeditor;
    std::array<std::string> aDestinatari;
    CMesaj* mMesaj;

public:
    //gettere si settere pt expeditor,destinatari,mesaj


};

#endif // CEMAIL_H
