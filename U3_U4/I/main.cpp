#include <bits/stdc++.h>
using namespace std;

int main() {
   string numero, aux1, aux2;
   list<string> listanumeros, listaFinal;
   list<string>::iterator it;
   list<string>::iterator fin;
   //int contador =15;

    while (cin >> numero){
        listanumeros.push_back(numero);
        //contador--;
    }


    it=listanumeros.begin();
    fin=listanumeros.end(); fin--;
    while (it != listanumeros.end()){
        if(*it=="1"){
            aux1+=*it;
            for(int i=1; i<=2; i++){
                if(it != fin){
                    it++;
                    aux1+=*it;
                } else{
                    aux1+="0";
                }
            }
            listaFinal.push_back(aux1);
            aux1="";

        } else if(*it >="6" && *it <="9"){
            aux2+=*it;
            for(int i=1; i<=1; i++){
                if(it != fin){
                    it++;
                    aux2+=*it;
                } else{
                    aux2+="0";
                }
            }
            listaFinal.push_back(aux2);
            aux2="";
        } else{
            listaFinal.push_back(*it);
        }
        it++;
    }

    for(auto& i: listaFinal){
        cout << i << " ";
    }

    return 0;
}
