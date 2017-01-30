#ifndef DEF_EMPLOYER
#define DEF_EMPLOYER

#define DEF_EMPLOYER_DEPLACEMENT_PRICE 50
#define DEF_EMPLOYER_HOUR_PRICE 24.5

#include <string>

class Employer
{
public:
  Employer(std::string name, std::string firstName, int age);

  void displayState() const;

  double calcSalaire();

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
