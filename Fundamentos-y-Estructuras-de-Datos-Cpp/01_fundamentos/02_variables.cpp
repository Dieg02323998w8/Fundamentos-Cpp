#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    int edad;

    cout << "Escribe tu nombre: ";
    getline(cin, nombre);

    cout << "Escribe tu edad: ";
    cin >> edad;

    cout << "Hola " << nombre << endl;
    cout << "Tienes " << edad << " anios." << endl;

    return 0;
}
