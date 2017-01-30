#include <vector>
#include <string>
using namespace std ;

#include <entreprise.h>
#include "vendeur.h"
#include "representant.h"
#include "Inter.h"
#include "SLRC.h"

Entreprise::Entreprise () : m_brand ("undefined")
{
}
Entreprise::Entreprise (string brand) : m_brand (brand)
{
}

void Entreprise::Name (string name)
{
  m_brand = name;
}

string Entreprise::getName()
{
  return m_brand;
}

void addVendeur (Vendeur value)
{
  m_vendeur.push_back(value);
}

vector<Vendeur> Entreprise::getVendeur() const
{
  return m_vendeur;
}

void addRep(Representant value)
{
  m_rep.push_back(value);
}

vector<Representant> Entreprise::getRep() const
{
  return m_rep;
}

void addInterim (Interim value)
{
  m_interim.push_back(value);
}

vector<Interim> Entreprise::getInterim() const
{
  return m_interim;
}

void addSlrc (Slrc value)
{
  m_slrc.push_back(value);
}

vector<Slrc> Entreprise::getSlrc() const
{
  return m_slrc;
}
