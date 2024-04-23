#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Clase para representar un ingrediente
class Ingrediente {
private:
    string nombre;
    float cantidad; // en gramos
public:
    Ingrediente(string _nombre, float _cantidad) : nombre(_nombre), cantidad(_cantidad) {}

    // Método para obtener el nombre del ingrediente
    string getNombre() const {
        return nombre;
    }

    // Método para obtener la cantidad del ingrediente
    float getCantidad() const {
        return cantidad;
    }
};

// Clase para representar una receta
class Receta {
private:
    int identificador;
    string nombre;
    vector<Ingrediente> ingredientes;
    int tiempoPreparacion; // en minutos
    int tiempoCoccion; // en minutos
    int porciones;
    string nivelDificultad;
    string categoria;
    string origen;
    // Valor nutricional
    float calorias;
    float grasas;
    float proteinas;
    float carbohidratos;
    float otros;

public:
    // Constructor
    Receta(int _id, string _nombre, vector<Ingrediente> _ingredientes, int _tiempoPrep, int _tiempoCocc, int _porciones,
        string _dificultad, string _categoria, string _origen, float _cal, float _gras, float _prot, float _carb, float _otro) :
        identificador(_id), nombre(_nombre), ingredientes(_ingredientes), tiempoPreparacion(_tiempoPrep),
        tiempoCoccion(_tiempoCocc), porciones(_porciones), nivelDificultad(_dificultad), categoria(_categoria),
        origen(_origen), calorias(_cal), grasas(_gras), proteinas(_prot), carbohidratos(_carb), otros(_otro) {}

    // Método para obtener el nombre de la receta
    string getNombre() const {
        return nombre;
    }

    // Método para obtener la lista de ingredientes
    vector<Ingrediente> getIngredientes() const {
        return ingredientes;
    }

    // Otros métodos getter para el resto de los atributos

    // Método para imprimir la información de la receta
    void imprimirReceta() const {
        cout << "Receta: " << nombre << endl;
        cout << "Ingredientes:" << endl;
        for (const auto& ingrediente : ingredientes) {
            cout << "- " << ingrediente.getNombre() << ": " << ingrediente.getCantidad() << " gramos" << endl;
        }
        cout << "Tiempo de preparación: " << tiempoPreparacion << " minutos" << endl;
        cout << "Tiempo de cocción: " << tiempoCoccion << " minutos" << endl;
        cout << "Porciones: " << porciones << endl;
        cout << "Nivel de dificultad: " << nivelDificultad << endl;
        cout << "Categoría: " << categoria << endl;
        cout << "Origen: " << origen << endl;
        cout << "Valor nutricional: " << endl;
        cout << "- Calorías: " << calorias << endl;
        cout << "- Grasas: " << grasas << "g" << endl;
        cout << "- Proteínas: " << proteinas << "g" << endl;
        cout << "- Carbohidratos: " << carbohidratos << "g" << endl;
        cout << "- Otros: " << otros << "g" << endl;
    }
};

int main() {
    // Crear algunos ingredientes
    Ingrediente ingrediente1("Harina", 200);
    Ingrediente ingrediente2("Azúcar", 100);
    Ingrediente ingrediente3("Huevos", 3);

    // Crear una receta
    vector<Ingrediente> ingredientesReceta = { ingrediente1, ingrediente2, ingrediente3 };
    Receta receta1(1, "Torta de chocolate", ingredientesReceta, 30, 45, 8, "Media", "Postre", "Internacional", 350, 15, 5, 40, 10);

    // Imprimir la información de la receta
    receta1.imprimirReceta();

    return 0;
}
