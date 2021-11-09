#include <bits/stdc++.h>
using namespace std;

list<int> N;
void guardar(int n){
    N.push_back(n);
}

string buscar(int n){
    list<int>::iterator i;
    i=N.begin();
    while (i != N.end()){
        if(n == *i) return "Si";
        i++;
    }
    return "No";
}

int main() {
    int entradas, numero;

    cin >> entradas;
    while (entradas>0){
        cin >> numero;
        guardar(numero);
        entradas--;
    }

    cin >> numero;
    cout << buscar(numero);
    return 0;
}
