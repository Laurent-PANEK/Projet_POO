#include <iostream>
#include <string>
#include <time.h>

#include "entreprise.h"

using namespace std;

int main()
{
  Entreprise test("VONY");
  std::cout << "Societe : " << test.getName() << endl;
  test.addVendeur(Paul("Paul", "", 34, 10));
  test.addVendeur(Pierre("Pierre", "", 28, 5));
  test.addVendeur(Jacques("Jacques", "", 56, 1));
  std::cout << "Vendeurs : " << test.getVendeur() << endl;
}
