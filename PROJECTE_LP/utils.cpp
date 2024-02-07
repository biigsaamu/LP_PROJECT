#include "utils.h"
#include <stdlib.h>    
#include <time.h> 

enum Categoria randomCategoria() {
	int num;
	srand(time(NULL));
	num = rand() % 2;
	switch (num)
	{
	case 0:
		return Categoria::RIGIDA;
		break;
	case 1:
		return Categoria::DOBLE;
		break;
	default:
		break;
	}
}

enum ModalitatC randomModalitatC() {
	int num;
	srand(time(NULL));
	num = rand() % 4;
	switch (num)
	{
	case 0:
		return ModalitatC::AERO;
		break;
	case 1:
		return ModalitatC::GRANFONDO;
		break;
	case 2:
		return ModalitatC::GRAVEL;
		break;
	case 3:
		return ModalitatC::RENDIMIENTO;
		break;
	default:
		break;
	}
}

enum Modalitat randomModalitat() {
	int num;
	srand(time(NULL));
	num = rand() % 4;
	switch (num)
	{
	case 0:
		return Modalitat::DESCENS;
		break;
	case 1:
		return Modalitat::ENDURO;
		break;
	case 2:
		return Modalitat::RALLY;
		break;
	case 3:
		return Modalitat::TRAIL;
		break;
	default:
		break;
	}
}

enum Talla randomTalla() {
	int num;
	srand(time(NULL));
	num = rand() % 5;
	switch (num)
	{
	case 0:
		return Talla::XS;
		break;
	case 1:
		return Talla::S;
		break;
	case 2:
		return Talla::M;
		break;
	case 3:
		return Talla::L;
		break;
	case 4:
		return Talla::XL;
		break;
	default:
		break;
	}
}

enum Quadre randomQuadre() {
	int num;
	srand(time(NULL));
	num = rand() % 5;
	switch (num)
	{
	case 0:
		return Quadre::ALUMINI;
		break;
	case 1:
		return Quadre::CARBONO;
		break;
	default:
		break;
	}
}

enum Roda randomRoda() {
	int num;
	srand(time(NULL));
	num = rand() % 6;
	switch (num)
	{
	case 0:
		return Roda::RODA_26;
		break;
	case 1:
		return Roda::RODA_27;
		break;
	case 2:
		return Roda::RODA_29;
		break;
	case 3:
		return Roda::RODA_14;
		break;
	case 4:
		return Roda::RODA_20;
		break;
	case 5:
		return Roda::RODA_700;
		break;
	default:
		break;
	}
}

enum Fre randomFre() {
	int num;
	srand(time(NULL));
	num = rand() % 2;
	switch (num)
	{
	case 0:
		return Fre::DISC;
		break;
	case 1:
		return Fre::RIM;
		break;
	default:
		break;
	}
}


bool randomBool() {
	int num;
	srand(time(NULL));
	num = rand() % 2;
	switch (num)
	{
	case 0:
		return false;
		break;
	case 1:
		return true;
		break;
	default:
		break;
	}
}
std::string randomColor();
