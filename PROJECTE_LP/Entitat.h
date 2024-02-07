#pragma once
#include <string>

using namespace std;

class Entitat
{
public:
	virtual ~Entitat() = default;
	string getNom() const {return m_nom;}
	string getCodi() const {return m_codi;}
protected:
	Entitat() = default;
	Entitat(string nom, string codi);
	string m_nom;
	string m_codi;
	
};

