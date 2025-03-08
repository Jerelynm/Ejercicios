/*Encuentra el mínimo, máximo, y promedio de 15 números
que el usuario introducirá.
**Los números varían entre 0 y 100.
*/

#include<iostream>
using namespace std;

int main()
{
    int min=100, max=0;
    float n, sum=0;

    cout<< "Introduce 15 numeros: ";
    for(int i=0; i < 15; i++) {
        cin>> n;

        if(n <= min)
            min = n;
        if(n >= max)
            max = n;

        sum += n;
    }

    cout<<"\nMinimo: "<<min;
    cout<<"\nMaximo: "<<max;
    cout<<"\nPromedio: "<<sum/15.0;


    return 0;
}
