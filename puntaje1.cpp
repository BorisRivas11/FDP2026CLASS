#include <iostream>
using namespace std;
int main(){
    cout << "Bienvenido al programa de puntaje de tus estrellas" << endl;
    cout << "Ingresa las estrellas que ganaste" << endl;
    int estrellas;
    cin >> estrellas;
    switch (estrellas) {
        case 1:
            cout << "Obtuviste 1 estrella, sigue practicando!" << endl;
            break;
            case 2:
            cout << "Obtuviste 2 estrellas, buen trabajo!" << endl;
            break;
            case 3:
            cout << "Obtuviste 3 estrellas, excelente!" << endl;
            break;
            case 4:
            cout << "Obtuviste 4 estrellas, increible!" << endl;
            break;
            case 5:
            cout << "Obtuviste 5 estrellas, eres un maestro!" << endl;
            break;
            default:
            cout << "Numero de estrellas no valido, por favor ingresa un número entre 1 y 5." << endl;
            break;
            return 0;    
            }
}
    