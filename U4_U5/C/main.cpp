#include <bits/stdc++.h>
using namespace std;

int buscarPuerta(const int array[], int lon, int llave){
    int init=0, fin=lon-1, mitad_array=0;

    do{
        mitad_array= (init + fin) / 2;
        if(array[mitad_array] < llave) init= mitad_array + 1;
        else if(array[mitad_array] == llave) return mitad_array + 1;
        else fin= mitad_array - 1;
        if(init> fin) return 0;

    } while (init<=fin);

    return mitad_array;
}

int main() {
    int cantidad_puertas, cantidad_llaves, puerta, llave, c=0;

    cin >> cantidad_puertas;

    int lonP=cantidad_puertas, array_puertas[lonP - 1];
    while (cantidad_puertas>0){
        cin >> puerta;
        array_puertas[c++]= puerta;
        cantidad_puertas--;
    }

    cin >> cantidad_llaves;
    c=0; int lonPs=cantidad_llaves, posiciones[lonPs];
    while(cantidad_llaves>0){
        cin >> llave;
        posiciones[c++]= buscarPuerta(array_puertas, lonP, llave);
        cantidad_llaves--;

    }
    for(auto i : posiciones){
        cout << i << " ";
    }
    return 0;
}
