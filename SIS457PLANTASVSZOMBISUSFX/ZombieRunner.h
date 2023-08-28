#include <string>
#include <iostream>

class Zombie {
private:
    int energia;
    int nivelFuria;
    int velocidad;
    float posicionX;
    float posicionY;
    std::string tipoZombie;
    std::string nombre;

public:
    Zombie();
    Zombie(std::string _nombre);
    Zombie(std::string _nombre, int _energia, int _nivelFuria, int _velocidad, float _posicionX, float _posicionY, std::string _tipoZombie);

    int getEnergia() const { return energia; }
    int getNivelFuria() const { return nivelFuria; }
    int getVelocidad() const { return velocidad; }
    float getPosicionX() const { return posicionX; }
    float getPosicionY() const { return posicionY; }
    std::string getTipoZombie() const { return tipoZombie; }
    std::string getNombre() const { return nombre; }

    void setEnergia(int _energia) { energia = _energia; }
    void setNivelFuria(int _nivelFuria) { nivelFuria = _nivelFuria; }
    void setVelocidad(int _velocidad) { velocidad = _velocidad; }
    void setPosicionX(float _posicionX) { posicionX = _posicionX; }
    void setPosicionY(float _posicionY) { posicionY = _posicionY; }
    void setTipoZombie(std::string _tipoZombie) { tipoZombie = _tipoZombie; }
    void setNombre(std::string _nombre) { nombre = _nombre; }

    void moverse();
    void moverse(float _posicionSiguienteX, float _posicionSiguienteY);
    void moverse(float _posicionFinalX, float _posicionFinalY, int _velocidad);
    void atacar();
    void morir();
    void morder();
    void bailar();
};