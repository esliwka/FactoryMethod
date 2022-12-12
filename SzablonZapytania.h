#ifndef SZABLON_ZAPYTANIA_H_
#define SZABLON_ZAPYTANIA_H_

#include <stdexcept>
#include <string>

enum NazwaBD {
  SQL_SERVER,
  ORACLE
};

class SzablonZapytania {
public:
  // punkt wejścia
  static void wykonajZapytanie(const NazwaBD &nazwaBD, const std::string &specZapyt);

  virtual void wykonajZapytanie(const std::string &specZapyt) = 0;
  virtual std::string formatujConnect() = 0;
  virtual std::string formatujSelect(const std::string &specZapyt) = 0;

private:
  // factory method
  static SzablonZapytania *utworzBD(const NazwaBD &nazwaBD);
};

#endif // SZABLON_ZAPYTANIA_H_
