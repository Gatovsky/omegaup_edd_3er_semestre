#include <bits/stdc++.h>
using namespace std;

int main() {
    int instancias, opcion, orden, tacosVendidos=0;
    queue<int> colaOrdenes;

    cin >> instancias;

    while (instancias>0){

        cin >> opcion;

        switch (opcion) {
            case 1:
                cin >> orden;
                colaOrdenes.push(orden);
                break;
            case 2:
                if(!colaOrdenes.empty()){
                    tacosVendidos+=colaOrdenes.front();
                    colaOrdenes.pop();
                }
                break;
            case 3:
                cout << colaOrdenes.size() << endl;
                break;
            case 4:
                cout << tacosVendidos << endl;
                break;
            default:
                break;
        }

        instancias--;
    }

    return 0;
}
