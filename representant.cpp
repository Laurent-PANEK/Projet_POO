#include "representant.h"

Representant::Representant()
{
  this->setPrime(250);
}

Representant::Representant(string name, string firstName, int age, double nbPrime, double nbDep) : Commercial(name, firstName, age)
{
  this->setNbPrime(nbPrime);
  this->setNbDep(nbDep);
  this->setPrime(250);
}
