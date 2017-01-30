#include "employer.h"

Employer::Employer() : m_name("undefined"), m_firstName("undefined"), m_age(0)
{
  double m_baseSalaire = 0;
  double m_nbPrime = 0;
  double m_prime = 0;
  double m_nbDep = 0;
  double m_nbHeure = 0;
}

Employer::Employer(std::string name, std::string firstName, int age) : m_name(name), m_firstName(firstName), m_age(age)
{
  double m_baseSalaire = 0;
  double m_nbPrime = 0;
  double m_prime = 0;
  double m_nbDep = 0;
  double m_nbHeure = 0;
}

void Employer::displayState() const
{
  cout << m_name << " " << m_firstName << " (Age : " << m_age << " Salaire : " << m_salaire" EUR)";
}

double Employer::calcSalaire()
{
  return m_salaire = m_baseSalaire + m_nbPrime * m_prime + m_nbDep * DEF_EMPLOYER_DEPLACEMENT_PRICE + m_nbHeure * DEF_EMPLOYER_HOUR_PRICE;
}
