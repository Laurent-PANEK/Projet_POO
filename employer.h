#ifndef DEF_EMPLOYER
#define DEF_EMPLOYER

#define DEF_EMPLOYER_DEPLACEMENT_PRICE 50
#define DEF_EMPLOYER_HOUR_PRICE 24.5

#include <vector>
#include <iostream>
#include <string>
using namespace std ;

#include <string>

class Employer
{
public:
  Employer();
  Employer(std::string name, std::string firstName, int age);

  void displayState() const;

  double calcSalaire();

  void setNbPrime(double value);
  double getNbPrime();

  void setNbDep(double value);
  double getNbDep();

  void setNbHours(double value);
  double getNbHours();

  void setBaseSalaire(double value);
  void setPrime(double value);

   string getNameE();
   string getFirstNameE();

protected:
  std::string m_name;
  std::string m_firstName;
  int m_age;
  double m_salaire;

  double m_baseSalaire;
  double m_nbPrime;
  double m_prime;
  double m_nbDep;
  double m_nbHeure;
};

#endif
