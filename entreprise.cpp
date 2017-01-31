#include <vector>
#include <string>
#include <iostream>
using namespace std;

#include "entreprise.h"
#include "vendeur.h"
#include "representant.h"
#include "interim.h"
#include "tech.h"

Entreprise::Entreprise () : m_brand ("undefined")
{
}
Entreprise::Entreprise (string brand) : m_brand (brand)
{
}

void Entreprise::setBrand(string name)
{
  m_brand = name;
}

string Entreprise::getBrand()
{
  return m_brand;
}

void Entreprise::addVendeur (Vendeur value)
{
  m_vendeur.push_back(value);
}

vector<Vendeur> Entreprise::getVendeur() const
{
  return m_vendeur;
}

void Entreprise::addRep(Representant value)
{
  m_rep.push_back(value);
}

vector<Representant> Entreprise::getRep() const
{
  return m_rep;
}

void Entreprise::addInterim (Interim value)
{
  m_interim.push_back(value);
}

vector<Interim> Entreprise::getInterim() const
{
  return m_interim;
}

void Entreprise::addTech (Tech value)
{
  m_tech.push_back(value);
}

vector<Tech> Entreprise::getTech() const
{
  return m_tech;
}

void Entreprise::displayState()
{
  cout << "Societe : " << m_brand << endl;
  cout << endl;
  int i = 0;
  double salaireTot = 0;
  double nbSal = 0;
  double moySal;
  cout << "Vendeurs : ";
  while (i < m_vendeur.size()) {
    cout << m_vendeur[i].getName() << " " << m_vendeur[i].getFirstName() << " (Salaire : " << m_vendeur[i].calcSalaire() << " EUR)  ";
    salaireTot += m_vendeur[i].calcSalaire();
    nbSal += 1;
    i++;
  }
  cout << endl;
  i = 0;
  cout << "Representants : ";
  while (i < m_rep.size()) {
    cout << m_rep[i].getName() << " " << m_rep[i].getFirstName() << " (Salaire : " << m_rep[i].calcSalaire() << " EUR)  ";
    salaireTot += m_rep[i].calcSalaire();
    nbSal += 1;
    i++;
  }
  cout << endl;
  i = 0;
  cout << "Techniciens salaries : ";
  while (i < m_tech.size()) {
    cout << m_tech[i].getName() << " " << m_tech[i].getFirstName() << " (Salaire : " << m_tech[i].calcSalaire() << " EUR)  ";
    salaireTot += m_tech[i].calcSalaire();
    nbSal += 1;
    i++;
  }
  cout << endl;
  i = 0;
  cout << "Interimaires : ";
  while (i < m_interim.size()) {
    cout << m_interim[i].getName() << " " << m_interim[i].getFirstName() << " (Salaire : " << m_interim[i].calcSalaire() << " EUR)  ";
    salaireTot += m_interim[i].calcSalaire();
    nbSal += 1;
    i++;
  }
  moySal = salaireTot / nbSal;
  cout << endl;
  cout << endl;
  cout << "La somme des salaires est de " << salaireTot << " EUR" << endl;
  cout << "Le salaire moyen est de " << moySal << " EUR" << endl;
}
