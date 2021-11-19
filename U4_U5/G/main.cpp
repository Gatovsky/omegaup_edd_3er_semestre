#include <bits/stdc++.h>
using namespace std;


int main() {
    int numero, aux, instancias;
    vector<int> vect;

    cin >> instancias;
    while(instancias>0){
        cin >> numero;
        vect.push_back(numero);

        instancias--;
    }


    for(int i=0; i < vect.size(); i++){
        for(int j=i+1; j<vect.size();j++){
            if(vect[i]> vect[j]){
                aux = vect[i];
                vect[i]=vect[j];
                vect[j]=aux;
            }
        }
    }

    for(auto i : vect){
        cout << i << " ";
    }
    return 0;
}