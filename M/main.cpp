#include <bits/stdc++.h>

using namespace std;

int ContarLetras(string palabra, int position, int longitud, int contador);

int ContarLetras(string palabra, int position, int longitud, int contador){
    if(position <= longitud){
        contador+=1;
        //cout << contador << endl;
        return ContarLetras(std::move(palabra), position+1, longitud, contador);
    }
    return contador;
}

int main(){
    string palabra;
    int longitud;

    cin >> palabra;
    if(palabra.length() > 0 && palabra.length() <= 100){
        longitud = palabra.length();

        if(palabra.length() > 4){
            int inter = ContarLetras(palabra,0, longitud-1, 0);

            cout << palabra[0] << inter-2 << palabra[longitud-1] <<endl;
        }else if(palabra.length() <=4){
            cout << palabra << endl;
        }
    }
    return 0;
}