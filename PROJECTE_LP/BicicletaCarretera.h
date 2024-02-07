#pragma once

#include "Bicicleta.h"
using namespace std;

enum class ModalitatC {
	AERO,
	GRANFONDO,
	GRAVEL,
	RENDIMIENTO,
};

class BicicletaCarretera : public Bicicleta
{
public:
	BicicletaCarretera(const string& model, const string descripcio, const int& temporada, const Talla& talla, const Quadre& quadre, const Roda& roda, const Fre& fre, CostTipusBicicleta tipus, const ModalitatC modalitat, const bool electrica);
	~BicicletaCarretera();
	void setModalitat(const ModalitatC& modalitat) { m_modalitatC = modalitat; }
	ModalitatC getModalitat() const { return m_modalitatC; }
	
	void setElectricaC(const bool& electrica) { m_electricaC = electrica; }
	bool getElectrica() const { return m_electricaC; }
	void setRoda(const Roda& roda) override {if(roda == Roda::RODA_700){this->m_roda = roda;};}
	void setTipus(CostTipusBicicleta tipus) override {if(tipus == CostTipusBicicleta::CARRETERA){this->m_tipus = tipus;}}


protected:
	ostream& format(ostream& os) const override;
private:
	ModalitatC m_modalitatC;
	bool m_electricaC;

};

