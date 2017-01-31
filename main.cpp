#include <iostream>
#include <string>
#include <time.h>

#include "entreprise.h"

using namespace std;

int main()
{
  Entreprise test("VONY");

  Vendeur Paul("Paul", "", 22, 10);
  test.addVendeur(Paul);
  Vendeur Pierre("Pierre", "", 22, 5);
  test.addVendeur(Pierre);
  Vendeur Jacques("Jacques", "", 22, 1);
  test.addVendeur(Jacques);

  Representant Rachel("Rachel", "", 23, 3, 10);
  test.addRep(Rachel);
  Representant Remi("Remi", "", 23, 2, 8);
  test.addRep(Remi);

  Tech Tanguy("Tanguy", "", 31);
  test.addTech(Tanguy);
  Tech Teo("Teo", "", 33);
  test.addTech(Teo);

  Interim Idris("Idris", "", 45, 75);
  test.addInterim(Idris);
  Interim Isaac("Isaac", "", 35, 50);
  test.addInterim(Isaac);
  Interim Irene("Irene", "", 54, 50);
  test.addInterim(Irene);
  Interim Igor("Igor", "", 25, 0);
  test.addInterim(Igor);

  test.displayState();

}
