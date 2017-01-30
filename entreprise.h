#ifndef DEF_ENTREPRISE
#define DEF_ENTREPRISE

#include <string>
#include <iostream>
#include <vector>

#include "vendeur.h"
#include "representant.h"
#include "Inter.h"
#include "SLRC.h"

using namespace std ;

class Entreprise {
public:
  Entreprise();
  Entreprise(string name);

  void setName (string name);
  string getName();

  void addVendeur (Vendeur value);
  vector<Vendeur> getVendeur() const;

  void addRep (Rep value);
  vector<Rep> getRep() const;

  void addInterim (Interim value);
  vector<Interim> getInterim() const;

  void addSlrc (Slrc value);
  vector<Slrc> getSlrc() const;

private:
  string m_brand;

  vector<Vendeur> m_vendeur;
  vector<Rep> m_rep;
  vector<Interim> m_interim;
  vector<Slrc> m_slrc;

};

#endif
