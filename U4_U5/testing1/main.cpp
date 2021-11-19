#include <bits/stdc++.h>

using namespace std;

class Insercion{
public:
    void insercion();
    vector<int> getNumero(){
        return numero;
    }
private:
    vector<int> numero={15,12,14,13,11};
    //int numero[5]={15,12,14,13,11};
};

void Insercion::insercion() {

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

   /* cout<<"orden: ";
    for(i=0;i<5;i++) {
        cout << numero[i] << " ";
    }*/
}

int main(){
    Insercion inser{};
    inser.insercion();
    vector<int> v = inser.getNumero();

    for(auto i: v){
        cout << i << " ";
    }
    return 0;
}
