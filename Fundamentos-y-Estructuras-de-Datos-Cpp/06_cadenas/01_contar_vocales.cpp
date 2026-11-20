#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    int contador = 0;

    cout << "Escribe una frase: ";
    getline(cin, texto);

    for (int i = 0; i < texto.length(); i++) {
        char letra = texto[i];

        if (letra == 'a' || letra == 'e' || letra == 'i' ||
            letra == 'o' || letra == 'u' || letra == 'A' ||
            letra == 'E' || letra == 'I' || letra == 'O' ||
            letra == 'U') {
            contador++;
        }
    }

    cout << "Cantidad de vocales: " << contador << endl;
    return 0;
}
