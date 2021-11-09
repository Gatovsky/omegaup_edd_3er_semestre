#include <bits/stdc++.h>
using namespace std;

/*
 *Encuentra cuál es la pareja de dados lanzados cuya suma sea mínima,
 * y la pareja de dados cuya suma sea máxima.
 * Utilizando método burbuja.
 */

void sumaDePares(const int array[], int lon, int& max, int& min){

    for(int init=0; init <lon; init++){
        cout << "i: "<< array[init] <<" ";
        for(int second=0; second<init; second++ ){
            cout <<"j: "<< array[second]<<" ";
            if(array[init]+array[second] <= min) min= array[init] + array[second];
            if(array[init]+array[second] >= max) max= array[init] + array[second];
        }
    }

}

int main() {
    int entradas, num, c=0;
    int max=INT_MIN, min=INT_MAX;

    cin >> entradas;
    int lon=entradas, arraynum[lon];
    while (entradas > 0){
        cin >> num;
        arraynum[c++] = num;
        //cout << arraynum[0] << endl;

        entradas--;
    }

    sumaDePares(arraynum, lon, max, min);

    cout << min << endl;
    cout << max << endl;
    return 0;
}
