#include "Planta.h"
#include "Zombie.h"

Planta::Planta() : vida(0), costo(0), nombre("") {}

Planta::Planta(std::string _nombre, int _vida, int _costo) : vida(_vida), costo(_costo), nombre(_nombre) {}

int Planta::getVida() const {
    return vida;
}

void Planta::setVida(int _vida) {
    vida = _vida;
}

int Planta::getCosto() const {
    return costo;
}

std::string Planta::getNombre() const {
    return nombre;
}

void Planta::atacar(Zombie& zombie) {
    std::cout << nombre << " está atacando a " << zombie.getNombre() << "." << std::endl;
}

void Planta::recibirDanio(int danio) {
    vida -= danio;
    if (vida <= 0) {
        std::cout << nombre << " ha sido destruida." << std::endl;
    }
}
