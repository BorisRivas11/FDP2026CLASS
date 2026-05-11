#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Bienvenido al programa de suma de numeros pares" << endl;
    cout << "Ingrese un numero entero positivo N" << endl;
    cin >> N;
    int suma =0;
    int i=2;
    while (i <= N) {
        suma += i;
        i += 1; // Incrementa en 2 para obtener solo números pares
    }
    cout << "La suma de los numeros pares desde 1 hasta " << N << " es: " << suma << endl;
    return 0;
}
