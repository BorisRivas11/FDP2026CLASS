#include <iostream>
using namespace std;
int main (){
    cout << "Ingrese un numero para poder realizar una tabla de multiplicar: " << endl;
    int a;
    cin >> a;
    for (int i=1; i <=10; i++){
        cout << a << " x " << i << " = " << a*i << endl;
        cout << endl;
    }
return 0;
}