#ifndef ZAPYTANIE_SQL_SERVER_H_
#define ZAPYTANIE_SQL_SERVER_H_

#include "SzablonZapytania.h"

#include <iostream>

struct ZapytanieSQLServer: public SzablonZapytania {
public:
  virtual void wykonajZapytanie(const std::string &specZapyt) override {
    std::cout << "Przekazuje zapytanie do bazy SQL: " << specZapyt << std::endl;
  }

  virtual std::string formatujConnect() override {
    return "CONNECT SQL";
  };

  virtual std::string formatujSelect(const std::string &specZapyt) override {
    return specZapyt;
  };
};

#endif // ZAPYTANIE_SQL_SERVER_H_
