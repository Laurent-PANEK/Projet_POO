#include "vendeur.h"

Vendeur::Vendeur()
{
  this->setPrime(100);
}

Vendeur::Vendeur(string name, string firstName, int age, double nbPrime) : Commercial(name, firstName, age)
{
  this->setNbPrime(nbPrime);
  this->setPrime(100);
}
