
// Suma Z+ Con Recursividad

#include <iostream>
using namespace std;

int leedato() {
    int i;
    cin >> i;
    return i;
}

int suma(int a, int b) {
    if (a > 0 && b > 0)
        return 2 + suma(a - 1, b - 1);
    else if (a > 0 || b > 0)
        return 1 + suma(a - 1, b - 1);
    else
        return 0;
}

void calcularSuma() {
    int a, b, Suma;
    do {
        system("cls");
        cout << "Ingrese a: ";
        a = leedato();
    } while (a < 0);

    do {
        system("cls");
        cout << "Ingrese b: ";
        b = leedato();
    } while (b < 0);

    Suma = suma(a, b);

    cout << "Suma: " << a << " + " << b << " = " << Suma << endl;
}

int main() {
    calcularSuma();
    cin.ignore();
    return 0;
}
