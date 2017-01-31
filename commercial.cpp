#include "commercial.h"

Commercial::Commercial() : m_baseSalaire(2500)
{

}

Commercial::Commercial(string name, string firstName, int age) : Employer(name, firstName, age), m_baseSalaire(2500)
{
 
}
