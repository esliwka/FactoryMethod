#include "SzablonZapytania.h"

#include "ZapytanieSQLServer.h"
#include "ZapytanieOracle.h"

void SzablonZapytania::wykonajZapytanie(const NazwaBD &nazwaBD, const std::string &specZapyt) {
  SzablonZapytania *bd = utworzBD(nazwaBD);

  std::string komendaBD = bd->formatujConnect();
  bd->wykonajZapytanie(komendaBD);

  std::string komendaBDSelect = bd->formatujSelect("select * from users");
  bd->wykonajZapytanie(komendaBDSelect);
}

SzablonZapytania *SzablonZapytania::utworzBD(const NazwaBD &nazwaBD) {
  switch (nazwaBD) {
    case SQL_SERVER:
      return new ZapytanieSQLServer(); 
    case ORACLE:
      return new ZapytanieOracle();
    default:
      throw std::runtime_error("Invalid enum value passed to factory method");
  }
}

