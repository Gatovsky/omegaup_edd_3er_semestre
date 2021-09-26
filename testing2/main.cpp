#include<bits/stdc++.h>
using namespace std;

int main()
{
    string frase;

    cin >> frase;

    int lon= frase.length();
    if (lon <= 4) cout << frase << endl;
    else{
        string counter;
        counter += frase[0];
        counter += std::to_string (lon-2);
        counter += frase[lon-1];

        cout << counter << endl;
    }

    return 0;
}