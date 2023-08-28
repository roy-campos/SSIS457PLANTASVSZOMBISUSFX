#pragma once
#include "Zombie.h"
class ZombieDancer : public Zombie
{
	int nivelDestrezaBaile = 10;
public:
	//Contructores
	ZombieDancer() {};

	//Metodos accesores
	int getNivelDestrezaBaile() { return nivelDestrezaBaile; }
	void setNivelDestrezaBaile(int _nivelDestrezaBaile) { nivelDestrezaBaile = _nivelDestrezaBaile; }

	
	void bailar();


};