#include <bits/stdc++.h>
using namespace std;

struct Elemento{
    string numero;
    Elemento *siguiente{};
};

Elemento *inicio, *final, *aux;

void insertar(string& n){
    if(inicio == nullptr){
        inicio = new Elemento;
        inicio ->numero = n;
        final = inicio;
    } else{
        aux = new Elemento;
        final->siguiente = aux;
        aux->numero = n;
        final = aux;
    }
    final->siguiente = nullptr;
}

void mostrar(){
    aux = inicio;
    while (aux != nullptr){
        cout << aux->numero << " ";
        aux= aux->siguiente; //similar a decir aux+=1;
    }
    cout << endl;
}

void buscar(string& n){
    aux = inicio;
    while (aux != nullptr){
        if(aux->numero == n){
            cout << aux->numero << " " << endl;
        }
        aux= aux->siguiente; //similar a decir aux+=1;
    }
}

void modificar(string& n, string& N){
    aux = inicio;
    while (aux != nullptr){
        if(aux->numero == n){
            aux->numero = N;
            cout << aux->numero << " " << endl;
        }
        aux= aux->siguiente; //similar a decir aux+=1;
    }
}

void eliminar(string& n){
    aux = inicio;
    while (aux != nullptr){
        if(aux->numero == n){
            if(aux == inicio){
                inicio = inicio->siguiente;
            } else{
                final->siguiente = aux->siguiente;
            }
            delete(aux);
        }
        final=aux;
        aux= aux->siguiente;
    }
}


int main() {
    int contador = 12;
    string numero, nuevoNum;

    while (contador>0){
        cin >> numero;
        insertar(numero);

        contador--;
    }
    cin >> numero >> nuevoNum;
    modificar(numero, nuevoNum);
    mostrar();
    cin >> numero;
    eliminar(numero);
    mostrar();

    return 0;
}
