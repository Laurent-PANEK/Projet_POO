#include "commercial.h"

Commercial::Commercial()
{
 this->setBaseSalaire(2500);
}

Commercial::Commercial(string name, string firstName, int age) : Employer(name, firstName, age)
{
 this->setBaseSalaire(2500);
}
