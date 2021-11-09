#include <bits/stdc++.h>

using namespace std;

int main(){

    int numero[]={15,12,14,13,11};
    int i,posicion,aux;

    for(i=0;i<5;i++){
        posicion = i;
        aux = numero[i];

        while((posicion > 0) && (numero[posicion-1] > aux)){
            numero[posicion]= numero[posicion - 1];
            posicion--;
        }
        numero[posicion] =aux;
    }

    cout<<"orden: ";
    for(i=0;i<5;i++){
        cout<<numero[i]<<" ";
    }

    return 0;
}