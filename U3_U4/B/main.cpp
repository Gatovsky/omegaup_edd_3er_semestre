#include <bits/stdc++.h>
using namespace std;

/*
 * Un problema fácil
 * Dado n enteros, determinar el número de veces que 2 números tienen como diferencia k
 *
 */

/*
//despejar x
int clearx(int n, int k){
    int x = n-k;
    return x;
}
*/

int main() {
    int numero, n, k, numVeces=0, diferencia;

    cin >> n >> k;
    int array[n];

   for(int iterator=0; iterator<=n-1; iterator++){
       cin >> numero;
       array[iterator]=numero;
   }
    for(int numero1=0; numero1 < n - 1; numero1++){
        for(int numIter=numero1+1; numIter < n; numIter++){
            diferencia= abs(array[numero1] - array[numIter]);
            if(diferencia==k) numVeces+=1;
        }
    }

    cout << numVeces;

    return 0;
}
