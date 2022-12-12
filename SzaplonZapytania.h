//
// Created by elim on 12/12/2022.
//

#ifndef FACTORYMETHOD_SZAPLONZAPYTANIA_H
#define FACTORYMETHOD_SZAPLONZAPYTANIA_H


#include "BazaDanych.h"
#include <string>

class SzaplonZapytania {
public:
    void WykonajZapytanie(BazaDanych *BD, std::string specZapyt) {

    };
    virtual void FormatujConnect() {};
    virtual void FormatujSelect() {};
    void utworzBD() {

    }
};


#endif //FACTORYMETHOD_SZAPLONZAPYTANIA_H
