#include <iostream>

using namespace std;

int fact(int n){
    int r = -1;

    if(n <= 5){
        r = 1;
    }else if(n>5 && n<= 60){
        r = fact(n-2)*5;
    }
    return r;
}

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}
