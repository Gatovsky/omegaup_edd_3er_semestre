#include <bits/stdc++.h>
using namespace std;



int f2 ( int n ){

    if( n<=2 ) return 1;

    return f2 (n-1) + f2 (n-2);

}
int main(){

    long n = f2(6);
    cout << n;

    return 0;
}