
// Código Fuente: Calcula el salario de un trabajador.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    float horasTrabajadas, tarifaHora, subtotal, bonificacion, total;

    cout << "Cálculo de pagos" << endl << endl;
    cout << "Nombre: ";
    cin >> nombre;
    cout << endl << "Horas Trabajadas: ";
    cin >> horasTrabajadas;

    if (horasTrabajadas <= 0) {
        cout << "No trabajó nada." << endl;
    } else {
        cout << "Tarifa por hora: ";
        cin >> tarifaHora;

        subtotal = horasTrabajadas * tarifaHora;

        if (horasTrabajadas > 192) {
            bonificacion = subtotal * 0.05;
        } else {
            bonificacion = subtotal * 0.03;
        }

        total = subtotal + bonificacion;

        cout << "El subtotal es: " << subtotal << endl;
        cout << "La bonificación es: " << bonificacion << endl;
        cout << "El total a pagar es: " << total << endl << endl;
    }

    cin.ignore();
    return 0;
}
