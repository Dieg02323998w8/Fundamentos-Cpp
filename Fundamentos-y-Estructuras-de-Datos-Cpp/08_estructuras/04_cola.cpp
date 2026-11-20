#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> cola;

    cola.push("Ana");
    cola.push("Luis");
    cola.push("Marta");

    while (!cola.empty()) {
        cout << cola.front() << endl;
        cola.pop();
    }

    return 0;
}
