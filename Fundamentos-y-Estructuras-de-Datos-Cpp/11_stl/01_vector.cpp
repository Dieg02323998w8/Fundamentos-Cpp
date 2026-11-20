#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros;

    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);

    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << endl;
    }

    return 0;
}
