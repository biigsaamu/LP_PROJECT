#include "Comanda.h"

Comanda::Comanda(const Data& entregaPrevista, vector<lineaComanda>& comanda) {
	m_entregaPrevista = entregaPrevista;
	m_llista_comanda = comanda;
	for (int i = 0; i < m_llista_comanda.size(); i++)
	{
		m_totalBicicletes += m_llista_comanda[i].m_quantitat;
		if (m_llista_comanda[i].tipus == CostTipusBicicleta::INFANTIL) {
			m_costTotal += 100 * m_llista_comanda[i].m_quantitat;
		}
		if (m_llista_comanda[i].tipus == CostTipusBicicleta::MTB) {
			m_costTotal += 200 * m_llista_comanda[i].m_quantitat;
		}
		if (m_llista_comanda[i].tipus == CostTipusBicicleta::CARRETERA) {
			m_costTotal += 250 * m_llista_comanda[i].m_quantitat;
		}
	}
}