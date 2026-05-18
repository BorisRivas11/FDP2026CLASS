#include <iostream>
using namespace std;

int main()
{
    int n;               
    bool esPrimo = true; 

    
    cout << "Ingresa un numero entero: ";
    cin >> n;


    if (n <= 1)
    {
        esPrimo = false; 
    }
    else
    {
        
        for (int i = 2; i * i <= n; i++)
        {
            cout<<n<<endl;
            cout<<i<<endl;
            if (n % i == 0)
            {                    
                esPrimo = false; 
            }
        }
    }

    
    if (esPrimo)
    {
        cout << n << " es un numero primo." << endl; \
    }
    else
    {
        cout << n << " no es un numero primo." << endl; 
    }

    return 0; 
}