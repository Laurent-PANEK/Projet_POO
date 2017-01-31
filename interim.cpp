#include"interim.h"

Interim::Interim()
{

}

Interim::Interim(string name, string firstName, int age, double nbHeure) : Tech(name, firstName, age)
{
  this->setBaseSalaire(0);
  this->setNbHours(nbHeure);
}
