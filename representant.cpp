#include "representant.h"

Representant::Representant() : m_prime(250)
{

}

Representant::Representant(string name, string firstName, int age, double nbPrime, double nbDep) : Commercial(name, firstName, age), m_prime(250), m_nbPrime(nbPrime), m_nbDep(nbDep)
{

}

double Representant::calcSalaire()
{
  return m_salaire = m_baseSalaire + m_nbPrime * m_prime + m_nbDep * DEF_EMPLOYER_DEPLACEMENT_PRICE;
}
