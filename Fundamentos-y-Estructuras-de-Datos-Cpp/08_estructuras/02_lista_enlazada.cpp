#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main() {
    Nodo* primero = new Nodo{10, nullptr};
    primero->siguiente = new Nodo{20, nullptr};
    primero->siguiente->siguiente = new Nodo{30, nullptr};

    Nodo* actual = primero;

    while (actual != nullptr) {
        cout << actual->dato << " -> ";
        actual = actual->siguiente;
    }

    cout << "NULL" << endl;

    while (primero != nullptr) {
        Nodo* borrar = primero;
        primero = primero->siguiente;
        delete borrar;
    }

    return 0;
}
