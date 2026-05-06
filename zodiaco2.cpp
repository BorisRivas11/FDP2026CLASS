#include <iostream>
using namespace std;
int main (){
    int mes, dia;
    cout << "Bienvenido a descubrir tu signo zodiacal" << endl;
    cout << "Ingresa tu mes de nacimiento de 1 al 12" << endl;
    cin >> mes;

    cout << "Ingresa tu dia de nacimiento" << endl;
    cin >> dia;

    switch(mes){
        case 1:
         if (dia <=21){
            cout << "Tu signo es Acuario" << endl;
            } else {
            cout << "Tu signo es Capricornio" << endl;
            }
        break;
        case 2:
            if (dia <=20){
                cout << "Tu signo es Piscis" << endl;
                } else {
                cout << "Tu signo es Acuario" << endl;
                }
        break;
        case 3:
            if (dia <=21){
                cout << "Tu signo es Aries" << endl;
                } else {
                cout << "Tu signo es Piscis" << endl;
                }
        break;
        case 4:
            if (dia <=20){
                cout << "Tu signo es Tauro" << endl;
                } else {
                cout << "Tu signo es Aries" << endl;
                }
        break;
        case 5:
            if (dia <=21){
                cout << "Tu signo es Geminis" << endl;
                } else {
                cout << "Tu signo es Tauro" << endl;
                }
        break;
        case 6:
                
            if (dia <=21){
                cout << "Tu signo es Cancer" << endl;
                } else {
                cout << "Tu signo es Geminis" << endl;
                }
        break;
        case 7:
            if (dia <=23){
                cout << "Tu signo es Leo" << endl;
                } else {
                cout << "Tu signo es Cancer" << endl;
                }
        break;
        case 8:
            if (dia <=23){
                cout << "Tu signo es Virgo" << endl;
                } else {
                cout << "Tu signo es Leo" << endl;
                }
                break;
        case 9:
                if (dia <=23){
                    cout << "Tu signo es Libra " << endl;
                    } else {   
                    cout << "Tu signo es Virgo" << endl;
                    }
        break;
        case 10:
            if (dia <=23){
                cout << "Tu signo es Escorpio" << endl;
                } else {
                cout << "Tu signo es Libra" << endl;
                }
        break;
        case 11:
         if (dia <=22){
            cout << "Tu signo es Sagitario" << endl;
            } else {
            cout << "Tu signo es Escorpio" << endl;
            }
            break;
            case 12:
            if (dia <=22){
                cout << "Tu signo es Capricornio" << endl;
                } else {
                cout << "Tu signo es Sagitario" << endl;
            }
            break;
            default:
            cout << "Tu mes no es valdido asi que debes ingresar un numero entre 1 y 12 para descubrir tu signo zodiacal" << endl;
            break;
    }
    return 0;
}

    