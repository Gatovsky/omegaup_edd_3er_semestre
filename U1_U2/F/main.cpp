//Conociendo la cantidad N de los meses en que se dejaron a los conejos recién nacidos,
// elabora un programa para ayudar al abuelo a identificar
// la cantidad total de parejas que se tiene actualmente.
#include <iostream>
using namespace std;

int fibonacci(int N);
int fibonacci(int N){
    int r = 0;

    if(N == 0) r=0;
    else if (N == 1) r=1;
    else if(N > 1){
        r = fibonacci(N-1) + fibonacci(N-2);
    }
    //cout << r << endl;
    return r;
}

int main() {
    int N;

    cin >> N;
    cout << fibonacci(N);
    return 0;
}
