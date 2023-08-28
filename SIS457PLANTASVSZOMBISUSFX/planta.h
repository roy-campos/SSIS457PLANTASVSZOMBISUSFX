#include <string>

class Planta {
private:
    int vida;
    int costo;
    std::string nombre;

public:
    Planta();
    Planta(std::string _nombre, int _vida, int _costo);

    int getVida() const;
    void setVida(int _vida);

    int getCosto() const;

    std::string getNombre() const;

    void atacar(Zombie& zombie);
    void recibirDanio(int danio);
};
