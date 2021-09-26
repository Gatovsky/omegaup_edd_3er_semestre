#include "bits/stdc++.h"
using namespace std;

void Minus(char array[], int position, int longitud) {
    if(position <= longitud){
        array[position] = tolower(array[position]);
        Minus(array, position+1, longitud);
    }
}

bool Palindromo(char array[], int init, int fin){
    if(init >= fin) return true;
    else if(array[init] != array[fin]) return false;
    else return Palindromo(array, init+1, fin - 1);

}

int main(){
    char palabra[100-1];
    int longitud, instancia = 0, contador=0;
    bool trueOrFalse;


    cin >> instancia;
    cin.ignore();

    string print[instancia];
    while (instancia >0 && instancia <=1000){
        cin >> palabra;
        longitud = strlen(palabra);

        Minus(palabra, 0, longitud-1);
        //cout << palabra << endl;

        trueOrFalse = Palindromo(palabra, 0, longitud-1);
        if(trueOrFalse) print[contador] = "Si";
        else print[contador] = "No";

        contador++;
        instancia--;
    }
    for (const auto& value : print) {
        cout << value << endl;
    }

    return 0;
}