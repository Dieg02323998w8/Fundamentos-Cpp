#include <iostream>
using namespace std;

int main() {
    int a[2][2];
    int b[2][2];

    cout << "Ingresa los 4 valores de la matriz A:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Ingresa los 4 valores de la matriz B:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> b[i][j];
        }
    }

    cout << "Resultado:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
