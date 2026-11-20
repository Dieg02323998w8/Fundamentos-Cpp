#include <iostream>
using namespace std;

int main() {
    int numeros[5] = {8, 3, 10, 5, 2};
    int buscado;
    bool encontrado = false;

    cout << "Numero que deseas buscar: ";
    cin >> buscado;

    for (int i = 0; i < 5; i++) {
        if (numeros[i] == buscado) {
            cout << "Encontrado en la posicion " << i << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "El numero no esta en el arreglo." << endl;
    }

    return 0;
}
