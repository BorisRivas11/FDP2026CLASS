#include <iostream>
using namespace std;
int main(){
    int opcion;
    cout << "Eliige el medio de transporte que humildemente te alcance para hoy" << endl;
    cout << "1. Bus" << endl;
    cout << "2. Metro" << endl;
    cout << "3. Taxi" << endl;
     cin >> opcion;
     switch (opcion){
        case 1:
            cout << "El bus es opcion economica aproximadamente un costo de 0.25 centavos de dolar por viaje" << endl;
            break;
            case 2:
            cout << "El metro es opcion rapida aroximadamente un costo de 3 dolares por viaje" << endl;
            break;
            case 3:
            cout << "El taxi es una opcion rapida y comoda aproximadamente un costo de 5 a 10 dolares por viaje dependiendo del movimiento del trafico" << endl;
            break;
            default:
            cout << "Opcion no valida, por favor ingresa un numero entre 1 y 3." << endl;
            break;
        }
    return 0;
}


     