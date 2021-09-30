#include <iostream>

using namespace std;

//función recursiva
int f(int n);
int f(int n){
    int r=1;
    if(n > 20) { //caso recursivo
        r = f(n - 5)+5+n;
    }
    //cout << r << endl;
    return r; //caso directo
}


int main() {
    int n;

    cin >> n;
    if(1 <=n && n <=40){
        cout << f(n) << endl;
    }

    return 0;
}