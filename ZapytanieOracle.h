#ifndef ZAPYTANIE_ORACLE_SERVER_H_
#define ZAPYTANIE_ORACLE_SERVER_H_

#include "SzablonZapytania.h"

#include <iostream>

class ZapytanieOracle : public SzablonZapytania {
public:
    void wykonajZapytanie(const std::string &specZapyt) override {
    std::cout << "Przekazuję zapytanie do bazy ORACLE: " << specZapyt << std::endl;
  }

  std::string formatujConnect() override {
    return "CONNECT ORACLE";
  };

  // ZapytanieOracle może formatować to zapytanie dodając na jego końcu średnik
  std::string formatujSelect(const std::string &specZapyt) override {
    return specZapyt + ";";
  }
};

#endif //  ZAPYTANIE_ORACLE_SERVER_H_
