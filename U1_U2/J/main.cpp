#include <bits/stdc++.h>
using namespace std;


string DecimalToBinary(int decimal){
    string binario;
    if(decimal > 0){
        binario = DecimalToBinary(decimal / 2) + (char)(decimal % 2 +48);
    }
    return binario;
}

int ContarBinarios(const string& binarios, int position, int contador){
    if(position < binarios.length()){
        if(binarios[position] == '1'){
            //cout << binarios[position] << endl;
            contador+=1;
        }
        return ContarBinarios( binarios, position+1, contador);
    }
    return contador;
}

int main() {
    int instancias, c=0;

    cin >> instancias;
    string binarios[instancias];
    int decimales[instancias];

    //se pide la cantidad de números de entrada al usuario
    while (instancias > 0 && instancias <= 100){
        int decimal;
        cin >> decimal;
        decimales[c] = decimal;
        c++;
        instancias--;

    }

    int p =0;
    for( int i : decimales){
        string binario;
        //cout << i << endl;
        binario = DecimalToBinary(i);
        binarios[p] = binario;
        p++;

    }

    // no existe conversión viable de string<char> a int por tanto j se declara como
    // una constante que referencia su valor en dirección de memoria y no como tipo int
    for(const auto& j : binarios){
        //cout << j << endl;
        cout << ContarBinarios(j, 0, 0) << endl;
    }


    return 0;
}
