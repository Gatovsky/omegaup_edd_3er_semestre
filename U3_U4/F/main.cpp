#include <bits/stdc++.h>
using namespace std;

/*
 * Manejando dos pilas
 * T=cantidad de instruccones
 * cada instrucción tiene 3 acciones:
 * P= insertar o transferir; S= pila1 ó pila2 y N=número a insertar ó elementos a transferir
 */

int main() {
    int instrucciones, orden, objetivo, numORelement;
    stack <int> pila1, pila2;

    cin >> instrucciones;

    while (instrucciones>0){

        cin >> orden >> objetivo >> numORelement;
        switch (orden){
            //insertar
            case 1:
                if(objetivo>=1 && objetivo<=2){
                    if(objetivo == 1) pila1.push(numORelement);
                    if(objetivo == 2) pila2.push(numORelement);
                }
                break;
            //transferir
            case 2:
                if(objetivo>=1 && objetivo<=2){
                    //de pila1 a pila2
                    if(objetivo == 1){
                        for(int i=1; i<=numORelement; i++){
                            if(!pila1.empty()){
                                pila2.push(pila1.top());
                                pila1.pop();
                            }
                        }
                    }
                    //de pila2 a pila1
                    if(objetivo == 2){
                        for(int i=1; i<=numORelement; i++){
                            if(!pila2.empty()){
                                pila1.push(pila2.top());
                                pila2.pop();
                            }
                        }
                    }
                }
                break;
            default:
                break;
        }
        instrucciones--;
    }

    //imprimir pila1
    while (!pila1.empty()){
        cout << pila1.top() <<" ";
        pila1.pop();
    }
    cout << endl;
    //imprimir pila2
    while (!pila2.empty()){
        cout << pila2.top() <<" ";
        pila2.pop();
    }

    return 0;
}
