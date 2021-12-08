#include <iostream>
using namespace std;


/**
 * usar vectores en lugar de arrays para más placer*
 * */


int main() {
    int m, n, num;

    cin >> m >> n;
    int matriz[m][n];

    //llenar matriz de mxn
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> num;
            matriz[i][j]=num;
        }
    }
    //ordenar elementos con método burbujita :3
    for(int i=0; i<n; i++){
        for(int j=m-1; j>0; j--){
            for(int k=0; k<j; k++){
                if(matriz[k][i] > matriz[k+1][i]){
                    int aux = matriz[k][i];
                    matriz[k][i] = matriz[k+1][i];
                    matriz[k+1][i] = aux;
                }
            }
        }
    }

    //imprimir en pantalla los elemnetos
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
