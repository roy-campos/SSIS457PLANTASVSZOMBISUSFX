#include "Zombie.h"

Zombie::Zombie()
{
	//energia = 100;
	nivelFuria = 20;
	velocidad = 30;
	posicionX = 1000.0f;
	posicionY = 540.0f;
	tipoZombie = "Zombie normal";
	nombre = "Zombie anonimo";
}

Zombie::Zombie(string _nombre)
{
	//energia = 100;
	nivelFuria = 20;
	velocidad = 30;
	posicionX = 1000.0f;
	posicionY = 540.0f;
	tipoZombie = "Zombie normal";
	nombre = _nombre;
}

Zombie::Zombie(string _nombre, int _energia, int _nivelFuria, int _velocidad, float _posicionX, float _posicionY, string _tipoZombie)
{
	energia = _energia;
	nivelFuria = _nivelFuria;
	velocidad = _velocidad;
	posicionX = _posicionX;
	posicionY = _posicionY;
	tipoZombie = _tipoZombie;
	nombre = _nombre;
}

void Zombie::moverse()
{
	posicionX += velocidad;
	posicionY += velocidad;

}

void Zombie::moverse(float _posicionSiguienteX, float _posicionSiguienteY)
{
	posicionX = _posicionSiguienteX;
	posicionY = _posicionSiguienteY;
}

void Zombie::moverse(float _posicionFinalX, float _posicionFinalY, int _velocidad)
{
	float distanciaX = _posicionFinalX - posicionX;
	float distanciaY = _posicionFinalY - posicionY;
	float distanciaTotal = sqrt(distanciaX * distanciaX + distanciaY * distanciaY);

	velocidad = _velocidad;
	float tiempo = distanciaTotal / velocidad;

	float velocidadX = distanciaX / tiempo;
	float velocidadY = distanciaY / tiempo;

	posicionX += velocidadX;
	posicionY += velocidadY;
}

void Zombie::atacar()
{
	cout << nombre << " está atacando a las plantas." << endl;
}

void Zombie::morir() {
	cout << nombre << "ha sido eliminado." << endl;

}

void Zombie::morder()
{
	cout << nombre << "esta mordiendo." << endl;

}