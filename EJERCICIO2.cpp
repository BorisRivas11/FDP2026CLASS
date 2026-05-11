# include <iostream>
using namespace std;
int main () {
    cout << "Bienvenido al programa de suma de numeros" << endl;
    cout << "Ingrese un numero desde el 0 hasta el 20" << endl;
    int numero;
    cin >> numero;
    int suma = 0;
    while (numero !=0){
        suma += numero;
        cout << "El numero ingresado es: " << numero << endl;
        cout << "La suma acumulada es: " << suma << endl;
        cout << "Ingrese otro numero o ingrese 0 al 20" << endl;
        cin >> numero;
    }
    cout << "La suma total es: " << suma << endl;       
    return 0;
}