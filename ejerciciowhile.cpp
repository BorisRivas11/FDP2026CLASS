#include <iostream>
using namespace std;
int main ()
{
    int contador ;
    cout << "Ingrese un numero para iniciar el contador: " << endl;
    cin >> contador ; // 1
    // Ciclo while 
    while (contador <= 5) {
        cout << "Contador while: " << contador << endl;
    contador++; // Incremente el contador 
    return 0;
    
}
