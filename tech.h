#ifndef DEF_TECH
#define DEF_TECH

#include<string.h>
#include<iostream>

#include "employer.h"

using namespace std;

class Tech : public Employer
{
public:
  Tech();
  Tech(string name, string firstName, int age);

};

#endif
