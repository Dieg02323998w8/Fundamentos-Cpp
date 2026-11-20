#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    double nota;
};

int main() {
    Estudiante alumno;

    cout << "Nombre: ";
    getline(cin, alumno.nombre);

    cout << "Nota: ";
    cin >> alumno.nota;

    cout << "Estudiante: " << alumno.nombre << endl;
    cout << "Nota: " << alumno.nota << endl;

    return 0;
}
