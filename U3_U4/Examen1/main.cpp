#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> lista;
    list<int>::iterator it;
    int I, tPersonas=0, lMax=0, iTiempo=1;

    cin >>I;

    while (I!=-1){
        lista.push_back(I);
        cin >> I;
    }

    it=lista.begin();
    while (it != lista.end()){
        tPersonas+=*it;
        iTiempo+=*it;
        iTiempo--;
        lMax= max(lMax, iTiempo);

        /*if(*it!=0){
            iTiempo+=*it;
            lMax= max(lMax, iTiempo);
        } else if(*it==0) iTiempo--;*/
        it++;
    }

    cout << tPersonas << " " << lMax;

    return 0;
}
