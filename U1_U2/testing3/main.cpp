#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    string palabra;

    cout<<"Ingrese palabra:"<<endl;
    cin >> palabra;

    size_t longitud = palabra.length()-1;
    size_t i=0;
    bool esPalindromo = true;

    for(i=0 ; i<palabra.length()/2 && esPalindromo ;i++) {

        if(palabra[i]!=palabra[longitud-i]){
            esPalindromo = false;
        }

    }

    cout<<((true == esPalindromo) ? "es palíndromo" : "no es palíndromo")<<endl;

    return EXIT_SUCCESS;

}