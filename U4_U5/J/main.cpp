#include <bits/stdc++.h>
using namespace std;

int main() {
    int instancias;
    unsigned int numero, N, numInmediatoN;
    vector<unsigned int> vect;

    cin >> instancias;
    while (instancias>0){
        cin >> numero;
        vect.push_back(numero);

        instancias--;
    }

    sort(vect.begin(), vect.end());
    cin >> N;
    for(auto it : vect){
        if(it > N){
            numInmediatoN=it;
            break;
        }
    }

    cout << numInmediatoN;

    return 0;
}