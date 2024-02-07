#pragma once
#include <list>
#include <map>
#include <string>
#include "Bicicleta.h"
#include "Entitat.h"
using namespace std;

enum class EstatRus {
	DISPONIBLE, EXPEDIDO, EN_BOTIGA, VENUT, RETORNAT, RETORNAT_MAGATZEM //revisar estados 1, 2, 3,4, 5, 8. Substituir por robada, dada de baja, ....
};

struct DadesSeguiment
{
	list<pair<EstatRus, Entitat*>> historic;
	Bicicleta* bicicleta;
};

class OrganismeRus
{

public:
	string generaCodiRus(string model);
	bool afegeixSeguiment(Bicicleta* bicicleta);
	void actualitzaEstat(const string& codiRus, EstatRus nouEstat, Entitat* novaEntitat);
	void mostraHistoric(const string& codiRus);
	void resetCodi(){this->m_seguentCodi = 0;}

	static OrganismeRus* getInstance()
	{
		if (!m_instance)
			m_instance = new OrganismeRus;
		return m_instance;
	}

private:
	map<string, DadesSeguiment> m_taulaCodis;
	int m_seguentCodi;
	static OrganismeRus* m_instance;
	OrganismeRus() { m_seguentCodi = 0; }
};

