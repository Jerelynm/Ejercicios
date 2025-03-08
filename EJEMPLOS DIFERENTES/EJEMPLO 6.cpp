
// Calificativo A(Bueno), B(Regular), C(Malo), D(Pésimo)

#include <iostream>
using namespace std;

void calificativo();
void notificar(char Calificativo);

void notificar(char Calificativo) {
    char sn;
    switch (Calificativo) {
        case 'A':
        case 'a':
            cout << "Bueno" << endl;
        break;
        case 'B':
        case 'b':
            cout << "Regular" << endl;
        break;
        case 'C':
        case 'c':
            cout << "Malo" << endl;
        break;
        case 'D':
        case 'd':
            cout << "Pésimo" << endl;
        break;
        default: {
            cout << "Inválido. ¿Desea ingresar nuevamente? S/s: ";
            cin >> sn;
            if (sn == 'S' || sn == 's')
                calificativo();
        }
    }
}

void calificativo() {
    char Calif;
    cout << "Ingrese Calificativo (A, B, C o D): ";
    cin >> Calif;
    notificar(Calif);
}

int main() {
    calificativo();
    return 0;
}