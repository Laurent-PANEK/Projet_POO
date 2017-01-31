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
};

#endif
