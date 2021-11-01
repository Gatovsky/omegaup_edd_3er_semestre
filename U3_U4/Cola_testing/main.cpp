#include <bits/stdc++.h>
using namespace std;

/*
 * Un problema fácil
 * Dado n enteros, determinar el número de veces que 2 números tienen como diferencia k
 *
 */


struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertarElemento(Nodo *&frente, Nodo *&fin, int numero);
bool cola_vacia(Nodo *frente);
void borrarElemento(Nodo *&frente, Nodo *&fin, int &numero);
void muestraElemento(Nodo *frente);


int main() {
    Nodo *frente = nullptr, *fin=nullptr;
    int numero, n;

    cin >> n;
    while (n>0){
        cin >> numero;
        insertarElemento(frente, fin, numero);
        n--;
    }

    muestraElemento(frente);

    //borra elementos de la cola
    while (frente!= nullptr){
        borrarElemento(frente, fin, numero);
        cout << numero << endl;
    }

    return 0;
}

void insertarElemento(Nodo *&frente, Nodo *&fin, int numero){
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = numero;
    nuevo_nodo->siguiente = nullptr;

    if(cola_vacia(frente)){
        frente = nuevo_nodo;
    } else{
        fin->siguiente=nuevo_nodo;
    }
    fin = nuevo_nodo;
}

bool cola_vacia(Nodo *frente){
    return (frente == nullptr);
}

void borrarElemento(Nodo *&frente, Nodo *&fin, int &numero){
    numero = frente->dato;
    Nodo *auxiliar = frente;

    if(frente==fin) frente = nullptr;
    else frente= frente->siguiente;

    delete auxiliar;
}

void muestraElemento(Nodo *frente){
    Nodo *auxiliar = frente;
    while (auxiliar != nullptr){
        cout << " " << auxiliar ->dato;
        auxiliar = auxiliar ->siguiente;
    }
}