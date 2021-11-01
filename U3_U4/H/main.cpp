#include <bits/stdc++.h>
using namespace std;

int Mayor(const list<int>& cadena){
    int mayor=0;
    for(int i : cadena){
        if(i>= mayor){
            mayor=i;
        }
    }
    return mayor;
}


int main() {
    int cantidadNumeros, numero, mayor, contador=0;
    list<int> numeros, numerosFinales;

    cin >> cantidadNumeros;
    while (cantidadNumeros>0){
        cin >> numero;

        numeros.push_back(numero);

        cantidadNumeros--;
    }

    mayor = Mayor(numeros);
    //cout << mayor << endl;


    for(int i : numeros){
        if(i != mayor){
            numerosFinales.push_back(i);
            contador++;
        }
    }

    cout << contador << endl;
    for(int i : numerosFinales){
        cout << i << " ";
    }
    return 0;
}
