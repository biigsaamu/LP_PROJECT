#pragma once
#include <map>
#include <queue>
#include <string>

#include "Comanda.h"
#include "Entitat.h"
#include "OrganismeRus.h"

using namespace std;


class Magatzem : public Entitat
{
public:
	Magatzem(){this->m_stock = map<string, queue<Bicicleta*>>();};
	~Magatzem(){};
	Magatzem(string nom, string codi);
	void actualitza_data();
	void enmagatzemarComanda(vector<Bicicleta*>& paquet);
	float procesQA(Comanda& c, vector<Bicicleta*>& paquet, Data dataActual);
	void rebreComanda(Comanda& c, vector<Bicicleta*>& paquet, Data dataActual);
	void generaFactura(bool paquetComplet, float costCorregit);
	map<string, queue<Bicicleta*>> getStock() const { return m_stock; }
	map<CostTipusBicicleta, vector<string>> getRelacioModelTipus() const { return m_relacioModelTipus; }
	void mostraCataleg();
	Bicicleta* getElementByModel(const string& cs);
private:
	float m_taxaEndarreriment = 1.1f;
	map<string, queue<Bicicleta*>> m_stock;
	map<CostTipusBicicleta, vector<string>> m_relacioModelTipus;
	Data data;
};
