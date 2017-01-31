#include"tech.h"

Tech::Tech()
{
 this->setBaseSalaire(2000);
}

Tech::Tech(string name, string firstName, int age) : Employer(name, firstName, age)
{
  this->setBaseSalaire(2000);
}
