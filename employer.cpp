#include <vector>
#include <iostream>
#include <string>
using namespace std ;

#include "employer.h"

Employer::Employer() : m_name("undefined"), m_firstName("undefined"), m_age(0), m_baseSalaire(0), m_nbPrime(0), m_prime(0), m_nbDep(0), m_nbHeure(0)
{

}

Employer::Employer(string name, string firstName, int age) : m_name(name), m_firstName(firstName), m_age(age), m_baseSalaire(0), m_nbPrime(0), m_prime(0), m_nbDep(0), m_nbHeure(0)
{

}

void Employer::displayState() const
{
  cout << m_name << " " << m_firstName << " (Age : " << m_age << " Salaire : " << m_salaire << " EUR)" << endl;
}

double Employer::calcSalaire()
{
  return m_salaire = m_baseSalaire + m_nbPrime * m_prime + m_nbDep * DEF_EMPLOYER_DEPLACEMENT_PRICE + m_nbHeure * DEF_EMPLOYER_HOUR_PRICE;
}

void Employer::setNbPrime(double value)
{
  m_nbPrime = value;
}
double Employer::getNbPrime()
{
  return m_nbPrime;
}

void Employer::setNbDep(double value)
{
  m_nbDep = value;
}
double Employer::getNbDep()
{
  return m_nbDep;
}

void Employer::setNbHours(double value)
{
  m_nbHeure = value;
}
double Employer::getNbHours()
{
  return m_nbHeure;
}

void Employer::setBaseSalaire(double value)
{
  m_baseSalaire = value;
}
void Employer::setPrime(double value)
{
  m_prime = value;
}

string Employer::getNameE()
{
  return m_name;
}

string Employer::getFirstNameE()
{
  return m_firstName;
}
