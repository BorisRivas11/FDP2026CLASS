#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad de terminos de la serie de Fibonacci: ";
    cin >> N;

    int a = 0, b = 1, contador = 0;

    cout << "Serie de Fibonacci: ";

    while (contador < N) {
        cout << a << " ";
        int siguiente = a + b;
        a = b;
        b = siguiente;
        contador++;
    }

    cout << endl;
    return 0;
}
    