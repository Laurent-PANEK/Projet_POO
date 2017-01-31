#ifndef DEF_REPRESENTANT
#define DEF_REPRESENTANT

#include <iostream>
#include <string>

#include "commercial.h"

class Representant : public Commercial
{
public:
  Representant();
  Representant(string name, string firstName, int age, double nbPrime, double nbDep);

  double calcSalaire();

private:
  double m_nbPrime;
  double m_prime;
  double m_nbDep;
};

#endif
