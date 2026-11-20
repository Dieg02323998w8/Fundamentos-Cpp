#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream salida("mensaje.txt");
    salida << "Estoy aprendiendo C++." << endl;
    salida.close();

    ifstream entrada("mensaje.txt");
    string linea;

    while (getline(entrada, linea)) {
        cout << linea << endl;
    }

    entrada.close();
    return 0;
}
