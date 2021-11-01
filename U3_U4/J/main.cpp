#include <bits/stdc++.h>
using namespace std;


int main() {
    int dias, nivelFelicidad, felicidadContinua=0, contador=1, pos=0;


    cin >> dias;

    int felicidad[dias];
    int n=dias;

    while (dias>0){
        cin >> nivelFelicidad;

        felicidad[pos++]= nivelFelicidad;

        dias--;
    }


   for(int i = 1; i < n; i++) {
       if(felicidad[i-1] <= felicidad[i]) {
           contador++;
       }
       else{
           felicidadContinua = max(felicidadContinua, contador);
           contador=1;
       }
   }

   felicidadContinua = max(felicidadContinua, contador);

   cout << felicidadContinua;

    return 0;
}
