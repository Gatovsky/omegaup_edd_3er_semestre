#include <bits/stdc++.h>
using namespace std;

int main() {
    int instancias, numero, menor=INT_MAX;
    vector<int> vect;

    cin >> instancias;
    while (instancias>0){
        cin >> numero;
        vect.push_back(numero);

        instancias--;
    }

    auto it = vect.begin();
    while (it != vect.end()){
        if(*it <= menor) menor=*it;
        it++;
    }

    cout << menor;

    return 0;
}
