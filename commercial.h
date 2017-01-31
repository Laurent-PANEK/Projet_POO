#ifndef DEF_COMMERCIAL
#define DEF_COMMERCIAL

#include <iostream>
#include <string>

#include "employer.h"

class Commercial : public Employer
{
public:
  Commercial();
  Commercial(string name, string firstName, int age);

protected:
  double m_baseSalaire;
  
};

#endif
