#ifndef DEF_REPRESENTANT
#define DEF_REPRESENTANT

#include <iostream>
#include <string>

#include "commercial.h"

class Representant : public Commercial
{
public:
  Representant();
  Representant(double nb_prime, double nb_deplacement);
};

#endif
