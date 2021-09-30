#include <bits/stdc++.h>
using namespace std;

long Potencia(long base, int exponente){
    long numeroExpo = 0;

    if(exponente ==0) numeroExpo=1;
    else if(exponente >0) numeroExpo = base* Potencia(base, exponente-1);
    else if(exponente <0) numeroExpo = 1/base* Potencia(base, exponente+1);

    return numeroExpo;
}
int main(){
    int numero, exponente;

    cin >> numero >> exponente;

    cout << Potencia(numero, exponente);

    return 0;
}
