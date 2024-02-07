#pragma once

#include "Comanda.h"
#include "Magatzem.h"
#include "utils.h"

class Proveidor
{
public:
	Proveidor();
	Data generaDataEnviament(Data dataprevista, int diesmaxim);
	Proveidor(const int& codiProveidor) : m_codiProveidor(codiProveidor) {}


	void setCodiProveidor(const int& proveidor) { m_codiProveidor = proveidor; }
	int getCodiProveidor() const { return m_codiProveidor; }

	vector<Bicicleta*> procesaComanda(Comanda c, Magatzem& m);


private:
	int m_codiProveidor;


};
