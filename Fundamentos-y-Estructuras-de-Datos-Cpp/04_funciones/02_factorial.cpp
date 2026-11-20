#include <iostream>
using namespace std;

int factorial(int n) {
    int resultado = 1;

    for (int i = 1; i <= n; i++) {
        resultado = resultado * i;
    }

    return resultado;
}

int main() {
    int numero;

    cout << "Ingresa un numero entre 0 y 12: ";
    cin >> numero;

    if (numero < 0 || numero > 12) {
        cout << "Numero fuera del rango." << endl;
    } else {
        cout << "Factorial: " << factorial(numero) << endl;
    }

    return 0;
}
