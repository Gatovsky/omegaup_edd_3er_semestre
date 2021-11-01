#include <bits/stdc++.h>
using namespace std;

void descomp(int n){
    if (n==1) cout << n << "=" << n << endl;
    if(n>2){
        cout << n << "=" << n-1 << "+" << 1 << endl;
        if(n-2 !=0){
            cout << n << "=" << n-2 <<"+"<<1 <<"+" << 1 <<endl;
        }
    }if(n>=4){
        cout << n << "=" << n/n;
        for(int i=2; i<=n;i++){
            cout <<"+" << n/n;
        }
        cout << endl;
    }
}


int main() {
    int numero;
    cin >> numero;

    for(int i=1; i<=numero; i++){
        descomp(i);
    }
    return 0;
}