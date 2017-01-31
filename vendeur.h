#ifndef DEF_VENDEUR
#define DEF_VENDEUR

#include <iostream>
#include <string>

#include "commercial.h"

class Vendeur : public Commercial
{
public:
  Vendeur();
  Vendeur(string name, string firstName, int age,  double nbPrime);
};

#endif
