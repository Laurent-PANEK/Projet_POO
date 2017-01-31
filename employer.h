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

  string getName();
  string getFirstName();

protected:
  std::string m_name;
  std::string m_firstName;
  int m_age;
  double m_salaire;

};

#endif
