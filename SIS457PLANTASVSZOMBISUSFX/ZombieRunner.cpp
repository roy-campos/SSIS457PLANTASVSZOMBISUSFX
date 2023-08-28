#include "Zombie.h"

class ZombieRunner : public Zombie {
private:
    int stamina;

public:
    ZombieRunner() : Zombie(), stamina(100) {}

    ZombieRunner(string _nombre, int _energia, int _nivelFuria, int _velocidad, float _posicionX, float _posicionY, string _tipoZombie, int _stamina)
        : Zombie(_nombre, _energia, _nivelFuria, _velocidad, _posicionX, _posicionY, _tipoZombie), stamina(_stamina) {}

    int getStamina() const { return stamina; }
    void setStamina(int _stamina) { stamina = _stamina; }

    void correr() {
        if (stamina > 0) {
            stamina -= 10;
            posicionX += velocidad * 2;
            posicionY -= velocidad;
            cout << nombre << " está corriendo." << endl;
        }
        else {
            cout << nombre << " está agotado y no puede correr." << endl;
        }
    }
};