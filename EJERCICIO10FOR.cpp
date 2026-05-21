#include <iostream>
using namespace std;

int main (){
cout<< "Ingrese un numero del 1 al 10" << endl;
int n;
cin >> n;
int a=0, b=1;
cout << "Serie de Fibonacci: " << endl;
for (int i = 1; i <= n; i++) {
        cout << a << " ";      
        int siguiente = a + b; 
        a = b;                 
        b = siguiente;
    }
    cout << endl;
    return 0;
}
