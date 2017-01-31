#include <vector>
#include <iostream>
#include <string>
using namespace std ;

#include "employer.h"

Employer::Employer() : m_name("undefined"), m_firstName("undefined"), m_age(0)
{

}

Employer::Employer(string name, string firstName, int age) : m_name(name), m_firstName(firstName), m_age(age)
{

}

void Employer::displayState() const
{
  cout << m_name << " " << m_firstName << " (Age : " << m_age << " Salaire : " << m_salaire << " EUR)" << endl;
}

double Employer::calcSalaire()
{
  return m_salaire;
}

string Employer::getName()
{
  return m_name;
}

string Employer::getFirstName()
{
  return m_firstName;
}
