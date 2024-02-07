#pragma once
#include <string>


#include "Botiga.h"
#include "Comanda.h"
#include "Magatzem.h"
#include "Proveidor.h"

using namespace std;

class Empresa
{
public:
	Empresa(string name, int numBotigues, Magatzem& magatzemPrincipal);

	string getName() const { return m_name; }
	Magatzem& getMagatzem() { return m_magatzem; }
	vector<Botiga*>& getBotigues() { return m_botigues; }
	void setProveidor(Proveidor& proveidor) { this->m_proveidor = proveidor; }
	Proveidor& getProveidor() { return m_proveidor; }
	void afegeixBotiga(Botiga* b) {this->m_botigues.emplace_back(b);}
	
	bool realitzaComanda(Comanda& c, Proveidor& p);

private:
	string m_name;
	Magatzem m_magatzem;
	vector<Botiga*> m_botigues;
	Proveidor m_proveidor;

};
