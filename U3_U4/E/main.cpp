#include <bits/stdc++.h>
using namespace std;

/*
 * EasySatck: Tienes una pila vacía de números enteros y se te proporcionarán algunas instrucciones.
 * Estas instrucciones son las operaciones básicas de una pila (Pop, Push, Top).
 * Tu tarea es aplicar estas instrucciones de la mejor manera en una pila e imprimir lo que sea necesario.
 * p=1: ingresar elemento
 * p=2: eliminar elemento
 * p=3: imprimir elemento
 */

int main(){
    int instancias, orden, numero;
    stack <int> pila;
    cin >> instancias;

    while (instancias>0){
        cin >> orden;

        switch (orden) {
            case 1:
                cin >> numero;
                pila.push(numero);
                break;
            case 2:
                if(!pila.empty()) pila.pop();
                break;
            case 3:
                if(pila.empty())
                    cout <<"Empty!" << endl;
                else
                    cout << pila.top() << endl;
                break;
            default:
                break;
        }

        instancias--;
    }

    return 0;
}