#ifndef DEF_INTERIM
#define DEF_INTERIM

#include<string.h>
#include<iostream>

#include "tech.h"

using namespace std;

class Interim : public Tech
{
public:
  Interim();
  Interim(string name, string firstName, int age, double nbHeure);

};

#endif
