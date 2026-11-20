#include <iostream>
using namespace std;

int main() {
    int n;
    int suma = 0;

    cout << "Ingresa un numero positivo: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        suma = suma + i;
    }

    cout << "La suma es: " << suma << endl;
    return 0;
}
