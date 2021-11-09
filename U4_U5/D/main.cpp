#include <bits/stdc++.h>
using namespace std;

int buscarRepetidos(const int array[], int lon, int n){
    int repetidos=0;

    for(int i=0; i<=lon-1; i++ ){
        if(array[i]== n) repetidos++;
    }

    return repetidos;
}


int main() {
    int numero, instancias, c=0;

    cin >> instancias;
    int arraynum[instancias-1], lon= instancias;

    while (instancias>0){
        cin >> numero;
        arraynum[c++]=numero;
        instancias--;
    }

    cin >> numero;
    cout << buscarRepetidos(arraynum, lon,numero);

    return 0;
}
