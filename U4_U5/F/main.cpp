#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, K, numero, a, b, c;
    bool r=false;
    vector<int> vect;

    cin >> N;
    while(N>0){

        cin >> numero;
        vect.push_back(numero);
        N--;
    }

    cin >> K;

    while(K>0){
        cin >> a >> b >> c;

        vector<int>sub_vect(vect.begin() + a, vect.begin() + b + 1);
        /*for(auto i : sub_vect){
            cout << i<< " ";
        }*/
        auto i = sub_vect.begin();
        while (i != sub_vect.end()){
            if(*i==c){
                r=true; break;
            }
            else r=false;
            i++;
        }
        if(r) cout << "Si"<< endl;
        else cout << "No" << endl;

        K--;
    }

    return 0;
}