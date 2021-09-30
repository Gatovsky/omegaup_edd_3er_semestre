#include <iostream>

using namespace std;

//función recursiva
long int f(long int n);
long int f(long int n){
    long int r=1;
    if(n > 5) { //caso recursivo
        r = 5*f(n - 2);
    }
    cout << r << endl;
    return r; //caso directo
}


int main() {
    int n;

    cin >> n;
    if(1 <=n && n <=120){
        f(n);
    }

    return 0;
}