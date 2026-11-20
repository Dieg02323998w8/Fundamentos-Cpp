#include <iostream>
using namespace std;

int main() {
    double nota;

    cout << "Ingresa la nota (0 a 5): ";
    cin >> nota;

    if (nota < 0 || nota > 5) {
        cout << "Nota no valida." << endl;
    } else if (nota >= 3) {
        cout << "Aprobaste." << endl;
    } else {
        cout << "No aprobaste." << endl;
    }

    return 0;
}
