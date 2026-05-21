#include <iostream>
#include <fstream> // para guardar resultados
using namespace std;

int main() {
    string jugadores[2] = {"Pikachu", "Charmander"};
    int vida[2] = {100, 100}; // puntos de vida iniciales
    int opcion, turno = 0;

    ofstream archivo("resultados.txt"); // archivo para guardar resultados

    cout << "=== Batalla Pokemon ===" << endl;

    // ciclo principal: mientras ambos tengan vida
    while (vida[0] > 0 && vida[1] > 0) {
        cout << "Turno de " << jugadores[turno] << endl;
        cout << "1. Ataque rapido (-10 vida)";
        cout << "2. Ataque fuerte (-20 vida)";
        cout << "Elige tu ataque: ";
        cin >> opcion;

        int enemigo = (turno == 0) ? 1 : 0;

        switch(opcion) {
            case 1:
                vida[enemigo] -= 10;
                cout << jugadores[enemigo] << " pierde 10 de vida.";
                break;
            case 2:
                vida[enemigo] -= 20;
                cout << jugadores[enemigo] << " pierde 20 de vida.";
                break;
            default:
                cout << "Ataque invalido, pierdes el turno.";
        }

        cout << "Vida de " << jugadores[0] << ": " << vida[0] << endl;
        cout << "Vida de " << jugadores[1] << ": " << vida[1] << endl;

        turno = (turno + 1) % 2; // alterna turno
    }

    // determinar ganador
    if (vida[0] <= 0 && vida[1] <= 0) {
        cout << "Empate!";
        archivo << "Resultado: Empate";
    } else if (vida[0] <= 0) {
        cout << jugadores[1] << " gana la batalla!";
        archivo << "Ganador: " << jugadores[1] << endl;
    } else {
        cout << jugadores[0] << " gana la batalla!";
        archivo << "Ganador: " << jugadores[0] << endl;
    }

    archivo.close();
    return 0;
}
