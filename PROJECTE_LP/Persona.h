#pragma once
#include "Entitat.h"
#include <string>

using namespace std;

class Persona : public Entitat
{
public:
	Persona(){m_edat = 0;};
	~Persona(){};
	Persona(string nom, string dni, int edat);
	

private:
	int m_edat;
};

