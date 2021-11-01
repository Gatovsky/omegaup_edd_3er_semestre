#include <bits/stdc++.h>
using namespace std;

string a_b(string c);


int main() {

    int espacio;
    string c;
    cin.tie(0); ios_base::sync_with_stdio(false);
    cin >> espacio;
    for(int i = 1;i <=espacio;i++){

        cin >> c;

        if(c.length()>1){

            string cadenam = a_b(c);
            string numeros = cadenam.substr(0, cadenam.length() - 1);
            string u = cadenam.substr( cadenam.length()-1, cadenam.length());
            stringstream numeros2, u2;
            unsigned long long numeros3, u3;

            numeros2 << numeros;
            numeros2 >> numeros3;
            u2 << u;
            u2 >> u3;

            cout << numeros3 + u3 << endl;


        } else if(c.length()==1){
            cout << c.c_str() << endl;
        }
    }

    return 0;
}

string a_b(string c){
    char t;
    int j=0;
    while(j< c.length()){
        int h=0;
        while(h<j){
            if(c[j]>c[h]){
                t=c[j];
                c[j]=c[h];
                c[h]=t;
            }
            h++;
        }
        j++;
    }
    return c;
}