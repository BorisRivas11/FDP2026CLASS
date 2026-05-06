#include <iostream>
using namespace std;
int main(){
    int dia;
    cout << "Bienvenido a tu horario de clases" << endl;
    cout << "Ingresa el dia de la semana" << endl;
    cout << "1. Lunes" << endl;
    cout << "2. Martes" << endl;
    cout << "3. Miercoles" << endl;
    cout << "4. Jueves" << endl;
    cout << "5. Viernes" << endl;
    cin >> dia;
    switch (dia) {
        case 1:
            cout << "Tu horario del lunes es: Precalculo ,Fundamentos de programacion y Matematica discreta" << endl;
            break;
        case 2:
            cout << "Tu horario del martes es: Elementos para la ciencia y tecnologia" << endl;
            break;
        case 3:
            cout << "Tu horario del miercoles es: Precalculo ,Fundamentos de programacion y Matematica discreta" << endl;
            break;
        case 4:
            cout << "Tu horario del jueves es: Fundamentos de programacion" << endl;
            break;
        case 5:
            cout << "Tu horario del viernes es: Precalculo y Matematica discreta" << endl;
            break;
        default:
            cout << "Numero de dia no valido, por favor ingresa un numero entre 1 y 5." << endl;
            break;
    }
    return 0;
}