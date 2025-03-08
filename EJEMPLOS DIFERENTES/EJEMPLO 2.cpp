

// Ordena el número de números que usted quiera.


#include <iostream>
using namespace std;

int main() {
    int i, j, k, cn;
    int n[100]; // Tamaño máximo del arreglo, puedes ajustarlo según tus necesidades.

    cout << "Cantidad de numeros que desea Ingresar: ";
    cin >> cn;

    for (i = 0; i < cn; i++) {
        cout << "Ingrese numero " << i + 1 << " : ";
        cin >> n[i];
    }

    for (i = 1; i < cn; i++) {
        for (j = 0; j < cn - i; j++) {
            if (n[j] > n[j + 1]) {
                k = n[j + 1];
                n[j + 1] = n[j];
                n[j] = k;
            }
        }
    }

    cout << "Numeros ordenados:" << endl;
    for (i = 0; i < cn; i++) {
        cout << n[i] << endl;
    }

    cin.ignore();
    return 0;
}
