#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero:";
    cin >> numero;

    int inverso =0;

    for (; numero > 0; numero = numero / 10) {
        int digito = numero % 10;          
        inverso = inverso * 10 + digito;   
    }

    cout << "El numero invertido es: " << inverso << endl;

    return 0;
    }

