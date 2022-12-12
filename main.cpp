#include "SzablonZapytania.h"

int main() {
  SzablonZapytania::wykonajZapytanie(NazwaBD::SQL_SERVER, "select * from users");
  SzablonZapytania::wykonajZapytanie(NazwaBD::ORACLE, "select * from users");
}
