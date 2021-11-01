#include <bits/stdc++.h>

using namespace std;

int main() {
    int instancias, numero, par=0, impar=0, posPar=1, posImpar=1;
    list<int> listanumeros;
    list<int>::iterator it;

    cin >> instancias;

    while(instancias > 0){
        cin >> numero;
        listanumeros.push_back(numero);
        instancias--;
    }

    it=listanumeros.begin();
    while (it != listanumeros.end()){
        if(*it%2==0){
            par+=1;
            //posPar+=1;
        }else if(*it%2!=0){
            impar+=1;
            //posImpar+=1;
        }
        it++;
    }

    it = listanumeros.begin();
    if(par>impar){
        while (*it%2==0){
            posImpar++;
            it++;
        }
        cout << posImpar;

    } else if(impar>par){
        while(*it%2!=0){
            posPar++;
            it++;
        }
        cout << posPar;
    }
    return 0;
}
