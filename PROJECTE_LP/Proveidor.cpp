#include "Proveidor.h"

vector<Bicicleta*> Proveidor::procesaComanda(Comanda c, Magatzem& m) {
	vector<Bicicleta*> llistat_bicicletes;
	llistat_bicicletes.resize(c.getTotalBicicletes());
	vector<lineaComanda> comanda_bicicletes = c.getLlistaComanda();
	for (int i = 0; i < comanda_bicicletes.size(); i++)
	{
		if (comanda_bicicletes[i].tipus == CostTipusBicicleta::INFANTIL) {
			for (int j = 0; j < comanda_bicicletes[i].m_quantitat; j++)
			{
				BicicletaInfantil* bi;
				bool plegable = randomBool();
				bi->setPlegable(plegable);
				llistat_bicicletes.push_back(bi);
			}
		}
		if (comanda_bicicletes[i].tipus == CostTipusBicicleta::MTB) {
			for (int j = 0; j < comanda_bicicletes[i].m_quantitat; j++)
			{
				BicicletaMTB* bMTB;
				Categoria categoria = randomCategoria();
				Modalitat modalitat = randomModalitat();
				bool electrica = randomBool();
				bMTB->setCategoria(categoria);
				bMTB->setModalitat(modalitat);
				bMTB->setElectrica(electrica);
				llistat_bicicletes.push_back(bMTB);
			}
		}
		if (comanda_bicicletes[i].tipus == CostTipusBicicleta::CARRETERA) {
			BicicletaCarretera* bCarretera;
			ModalitatC modalitatC = randomModalitatC();
			bool elecrica = randomBool();
			bCarretera->setModalitat(modalitatC);
			bCarretera->setElectricaC(elecrica);
			llistat_bicicletes.push_back(bCarretera);
		}
	}
}