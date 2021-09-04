#include <iostream>

using namespace std;

int f(int n);
int main(){
    int n;
    cin>>n;
    if(n>=1 && n<=120){
        f(n);
    }
    return 0;
}

int f(int n){
    int p=1;
    if(n>5){
        p= 5*f(n-2);
    }

    cout<< p <<endl;

    return p;
}