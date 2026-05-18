#include <iostream>
using namespace std;

int main() {
    int N, suma = 0;

    cout << "Ingresa un número entero: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        suma += i; 
    }
    
    cout << "La suma de los primeros " << N << " números es: " << suma << endl;

    return 0;
}