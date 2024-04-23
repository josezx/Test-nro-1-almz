#pragma once
#ifndef INGREDIENTE_H
#define INGREDIENTE_H

#include <string>

// Clase para representar un ingrediente
class Ingrediente {
private:
    std::string nombre;
    float cantidad; // en gramos
public:
    Ingrediente(std::string _nombre, float _cantidad);

    // M�todos getter
    std::string getNombre() const;
    float getCantidad() const;
};

#endif // INGREDIENTE_H


