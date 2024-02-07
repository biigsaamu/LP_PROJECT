#pragma once
#include "Magatzem.h"

using namespace std;
class Botiga : public Entitat
{
public:
	Botiga(){};
	~Botiga(){};
	Botiga(string nom, string codi): Entitat(nom, codi) {this->m_stockBotiga = map<string, queue<Bicicleta*>>();}
	bool solicitaComanda(Comanda c, Magatzem& m);
	map<string, queue<Bicicleta*>> getStockBotiga() { return m_stockBotiga; }
	void mostraCataleg(bool desaEnDisc);
	int calculaStockTotal();


private:
	map<string, queue<Bicicleta*>> m_stockBotiga;
};
