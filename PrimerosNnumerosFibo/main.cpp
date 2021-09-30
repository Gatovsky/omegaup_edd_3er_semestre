/*
 * Generar un vector con los primeros N números de la serie Fibonacci
 */

#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n == 0) return 0;
    if(n==1 || n==2) return 1;
    return fibonacci(n-1)+ fibonacci(n-2);

}

int main() {

    int n;
    cin >> n;

    //si deseamos ver la serie de los n numeros de fibonacci, estos de se deberán pasar uno a uno
    //ejemplo: 12=144 ---> 1 1 2 3 5 8 13 21 34 55 89 144
    for(int numero=1; numero<=n; numero++){
        cout << fibonacci(numero) << " ";
    }

    return 0;
}