#ifndef DEF_ENTREPRISE
#define DEF_ENTREPRISE

#include <string>
#include <iostream>
#include <vector>

#include "vendeur.h"
#include "representant.h"
#include "interim.h"
#include "tech.h"

using namespace std ;

class Entreprise {
public:
  Entreprise();
  Entreprise(string brand);

  void setBrand(string name);
  string getBrand();

  void addVendeur (Vendeur value);
  vector<Vendeur> getVendeur() const;

  void addRep (Representant value);
  vector<Representant> getRep() const;

  void addInterim (Interim value);
  vector<Interim> getInterim() const;

  void addTech (Tech value);
  vector<Tech> getTech() const;

  void displayState();

private:
  string m_brand;

  vector<Vendeur> m_vendeur;
  vector<Representant> m_rep;
  vector<Interim> m_interim;
  vector<Tech> m_tech;

};

#endif
