#include<iostream>

using namespace std;

int ping(int x);
int pong(int x);
int ping(int x){
    if(x > 20) return x;
    cout << "ping " << x <<endl;
    pong(x+1);
}

int pong(int x){
    if(x > 20) return x;
    cout << "pong" << x << endl;
    ping(x+1);
}

int main()
{
    int x =1;
    cout << ping(x);

    return 0;
}