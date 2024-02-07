#pragma once

#include <array>
#include <string>

#include "Data.h"
using namespace std;

enum class CostTipusBicicleta
{
	INFANTIL = 100,
	MTB = 200,
	CARRETERA = 250
};

constexpr array<CostTipusBicicleta, 3> llistaTipusBicicleta{
	CostTipusBicicleta::INFANTIL, CostTipusBicicleta::MTB, CostTipusBicicleta::CARRETERA
};

enum class Fre
{
	DISC = 0,
	RIM = 1,
};

enum class Quadre
{
	ALUMINI = 0,
	CARBONO = 1,
};

enum class Roda
{
	RODA_26 = 0,
	RODA_27 = 1,
	RODA_29 = 2,
	RODA_14 = 3,
	RODA_20 = 4,
	RODA_700 = 5,
};


enum class Talla
{
	XS = 0,
	S = 1,
	M = 2,
	L = 3,
	XL = 4,
};


class Bicicleta
{
public:
	virtual ~Bicicleta() = default;
	virtual void setModel(const string& model) final { m_model = model; }
	virtual string getModel() const { return m_model; }
	virtual void setDescripcio(const string& descripcio) final { m_descripcioModel = descripcio; }
	virtual string getDescripcio() const { return m_descripcioModel; }
	virtual void setCodiRus(const string& codirus) final { m_codiRus = codirus; }
	virtual string getCodiRus() const { return m_codiRus; }
	virtual void setTemporada(const int& temporada) final { m_temporada = temporada; }
	virtual int getTemporada() const { return m_temporada; }
	virtual void setTalla(const Talla& talla) final { m_talla = talla; }
	virtual Talla getTalla() const { return m_talla; }
	virtual void setQuadre(const Quadre& quadre) { m_quadre = quadre; }
	virtual Quadre getQuadre() const { return m_quadre; }
	virtual void setRoda(const Roda& roda) { m_roda = roda; }
	virtual Roda getRoda() const { return m_roda; }
	virtual void setFre(const Fre& fre) { m_fre = fre; }
	virtual Fre getFre() const { return m_fre; }
	virtual CostTipusBicicleta getTipus() { return m_tipus; }
	virtual void setTipus(CostTipusBicicleta tipus) { this->m_tipus = tipus; }
	virtual void setPreu(CostTipusBicicleta cost) {this->m_preu = float(cost);}
	virtual float getPreu() const {return m_preu;}
	virtual void setDataEntrada(Data d){this->m_dataEntradaMagatzem = d;}
	virtual Data getDataEntrada(){return m_dataEntradaMagatzem;}
protected:
	Bicicleta(const string& model, const string descripcio, const int& temporada, const Talla talla,
		const Quadre quadre, const Roda roda, const Fre fre, CostTipusBicicleta tipus);
	virtual ostream& format(ostream& os) const { return os; }
	friend ostream& operator << (ostream& os, const Bicicleta& b) { return b.format(os); };
	string m_model; // codi comercial
	string m_descripcioModel;
	string m_codiRus;
	int m_temporada; //any model
	Talla m_talla;
	Quadre m_quadre;
	Roda m_roda;
	Fre m_fre;
	Data m_dataEntradaMagatzem;
	float m_preu;
	CostTipusBicicleta m_tipus;

};

