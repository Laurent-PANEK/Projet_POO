#include "vendeur.h"

Vendeur::Vendeur() : m_prime(100)
{

}

Vendeur::Vendeur(string name, string firstName, int age, double nbPrime) : Commercial(name, firstName, age), m_nbPrime(nbPrime), m_prime(100)
{

}

double Vendeur::calcSalaire()
{
  return m_salaire = m_baseSalaire + m_nbPrime * m_prime;
}
