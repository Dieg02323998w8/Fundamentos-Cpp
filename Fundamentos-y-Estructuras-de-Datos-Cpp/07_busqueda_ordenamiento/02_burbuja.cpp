#include <iostream>
using namespace std;

int main() {
    int numeros[5] = {5, 2, 4, 1, 3};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int temporal = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temporal;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;
    return 0;
}
