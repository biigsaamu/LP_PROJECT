#pragma once
#include <vector>

#include "Bicicleta.h"
#include "Data.h"


typedef struct{
	CostTipusBicicleta tipus;
	int m_quantitat;
	vector<string> posiblesModels;
}lineaComanda;
;
class Comanda
{
public:

	Comanda(const Data& entregaPrevista, vector<lineaComanda>& comanda);

	int getTotalBicicletes() const { return m_totalBicicletes; };
	Data getDataEntregaPrevista() const { return  m_entregaPrevista; }
	float getCostTotal() const { return m_costTotal; }
	vector<lineaComanda> getLlistaComanda() const { return m_llista_comanda; };



private:
	int m_totalBicicletes;
	Data m_entregaPrevista;
	float m_costTotal;

	vector<lineaComanda> m_llista_comanda;
};

