#include <iostream>
#include <string>
using namespace std;

class Persona {
public:
    string nombre;
    int edad;

    void mostrar() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
    }
};

int main() {
    Persona persona;

    persona.nombre = "Carlos";
    persona.edad = 20;

    persona.mostrar();
    return 0;
}
