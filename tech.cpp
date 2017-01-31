#include"tech.h"

Tech::Tech() : m_baseSalaire(2000)
{

}

Tech::Tech(string name, string firstName, int age) : Employer(name, firstName, age), m_baseSalaire(2000)
{

}

double Tech::calcSalaire()
{
  return m_salaire = m_baseSalaire;
}
