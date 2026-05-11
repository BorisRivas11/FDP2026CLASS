#include <iostream>
using namespace std;
int main()
{
    int opcion;
    while (opcion != 5)
    {
        cout << "Bienvenido al menu de ejercicios" << endl;
        cout << "1. Ir a clase" << endl;
        cout << "2. Ir a casa" << endl;
        cout << "3. Ir a la pea" << endl;
        cout << "4. Ir a la fiesta" << endl;
        cout << "5. Salida" << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            cout << "Ir a clase es una buena opcion para aprender y crecer como persona" << endl;
            break;
        case 2:
            cout << "Ir a casa es una buena opcion para descansar y pasar tiempo con la familia" << endl;
            break;
        case 3:
            cout << "Ir a la pea es una buena opcion para ganar dinero y adquirir experiencia laboral" << endl;
            break;
        case 4:
            cout << "Ir a la fiesta es una buena opcion para socializar y divertirse con amigos" << endl;
            break;
        case 5:
            cout << "Gracias por usar el menu de ejercicios, hasta luego!" << endl;
            break;
        default:
            cout << "Opcion no valida, por favor ingresa un numero entre 1 y 5." << endl;
            break;
        }
    }

return 0;
}
