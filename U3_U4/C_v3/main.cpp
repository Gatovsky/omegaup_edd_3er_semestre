#include <bits/stdc++.h>

using namespace std;

/*
 * a+b
 * La primera línea contendrá un entero t (instancias) especificando el número de casos. Cada caso consistirá en una línea
 * con una cadena de caracteres con dígitos de tamaño n. Si hay más de dos dígitos, no todos serán ceros.
 */

//solo tipo string
string ordenBurbuja(string cadena){
    char tmp;
    for(int i=0; i< cadena.length(); i++){
        for(int j=0; j < i; j++){
            if(cadena[i] > cadena[j]){
                tmp = cadena[i];
                cadena[i] = cadena[j];
                cadena[j] = tmp;
            }
        }
    }
    return cadena;
}


string quitarCeroInicio(const string& cadena){
    int i=0, contador=0;
    string nuevaCadena;

    if(cadena[0]=='0'){
        while (cadena[i++] == '0'){
            contador++;
        }

        if(contador >= cadena.length()){
            nuevaCadena = "0";
        } else{
            nuevaCadena = cadena.substr(contador, cadena.length()-1);
        }
    } else nuevaCadena = cadena;


    return nuevaCadena;
}

string dejarCeroFinal(const string& cadena){

    string nuevaCadena = cadena.substr(cadena.length()-1, cadena.length());

    return nuevaCadena;
}


int main() {
    int instancias;
    string cadena, fixCadena;
    list<int> numeros;

    cin >> instancias;
    while (instancias>0) {

        cin >> cadena;

        fixCadena = quitarCeroInicio(cadena);
        if (fixCadena.length() > 1) {
            //string regex = "^0+(?!$)";

            //cout << fixCadena.length() << endl;

            string cadenaMayor2Menor = ordenBurbuja(fixCadena);
            string str_nums = cadenaMayor2Menor.substr(0, cadenaMayor2Menor.length() - 1);
            string str_unico = cadenaMayor2Menor.substr(cadenaMayor2Menor.length() - 1, cadenaMayor2Menor.length());


            stringstream tmp_nums, tmp_unico;
            int int_nums, int_unico;

            tmp_nums << str_nums;
            tmp_nums >> int_nums;
            tmp_unico << str_unico;
            tmp_unico >> int_unico;

            cout << int_nums + int_unico << endl;


        }
        else if (fixCadena.length() == 1) {
            cout << fixCadena.c_str() << endl;
        }

        instancias--;
    }

    return 0;
}