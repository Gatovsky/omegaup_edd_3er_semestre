#include <bits/stdc++.h>
using namespace std;

/*
 * Sumando dos pilas.
 * AGREGA: agrega un valor a la pila
 * CONSUME: quita los dos últimos elementos de la pila, calcula la suma y los agrega a la pila
 * IMPRIME: imprime el último valor de la pila
 */

int main(){

    stack <int> P;
    int instancias, numero, n;
    string orden;

    cin >> instancias;

    while (instancias>0)
    {
        cin >> orden;

        switch ((char) orden[0])
        {
        case 'A':
            cin >> numero;
            P.push(numero);
            break;
        case 'C':
            int n1, n2;
            n1 = P.top();
            P.pop();
            n2 = P.top();
            P.pop();
            P.push(n1+n2);
            break;
        case 'I':
            cout << P.top() << endl;
            break;
        default:
            break;
        }
        instancias--;
    }


    return 0;
}