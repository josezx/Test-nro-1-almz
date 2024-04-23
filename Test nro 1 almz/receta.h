#pragma once
#ifndef RECETA_H
#define RECETA_H

#include <string>
#include <vector>
#include "Ingrediente.h" // Incluir el encabezado de la clase Ingrediente

// Clase para representar una receta
class Receta {
private:
    int identificador;
    std::string nombre;
    std::vector<Ingrediente> ingredientes;
    int tiempoPreparacion; // en minutos
    int tiempoCoccion; // en minutos
    int porciones;
    std::string nivelDificultad;
    std::string categoria;
    std::string origen;
    // Valor nutricional
    float calorias;
    float grasas;
    float proteinas;
    float carbohidratos;
    float otros;

public:
    // Constructor
    Receta(int _id, std::string _nombre, std::vector<Ingrediente> _ingredientes, int _tiempoPrep, int _tiempoCocc, int _porciones,
        std::string _dificultad, std::string _categoria, std::string _origen, float _cal, float _gras, float _prot, float _carb, float _otro);

    // Métodos getter
    std::string getNombre() const;
    std::vector<Ingrediente> getIngredientes() const;

    // Otros métodos getter para el resto de los atributos

    // Método para imprimir la información de la receta
    void imprimirReceta() const;
};

#endif // RECETA_H