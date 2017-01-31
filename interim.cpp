#include"interim.h"

Interim::Interim()
{

}

Interim::Interim(string name, string firstName, int age, double nbHeure) : Tech(name, firstName, age), m_nbHeure(nbHeure)
{
  
}

double Interim::calcSalaire()
{
  return m_salaire = m_nbHeure * DEF_EMPLOYER_HOUR_PRICE;
}
