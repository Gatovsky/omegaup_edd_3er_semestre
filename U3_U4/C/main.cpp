#include <bits/stdc++.h>
using namespace std;

/*
 * a+b
 * La primera línea contendrá un entero t (instancias) especificando el número de casos. Cada caso consistirá en una línea
 * con una cadena de caracteres con dígitos de tamaño n. Si hay más de dos dígitos, no todos serán ceros.
 */
string burbujita(string cadena){
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


int main() {
    int instancias;
    string cadena, fixCadena;
    //regex re("^0+(?!$)");
    list<int> numeros;

    cin >> instancias;
    while (instancias>0){

        cin >> cadena;

        if(cadena.length()>1){
            //string cadenafixed= regex_replace(cadena, re, "");
            //cout << cadena << endl;
            string cadenaMayor2Menor = burbujita(cadena);
            string str_nums = cadenaMayor2Menor.substr(0, cadenaMayor2Menor.length() - 1);
            string str_unico = cadenaMayor2Menor.substr( cadenaMayor2Menor.length()-1, cadenaMayor2Menor.length());


            stringstream tmp_nums, tmp_unico;
            unsigned long long int_nums, int_unico;

            tmp_nums << str_nums;
            tmp_nums >> int_nums;
            tmp_unico << str_unico;
            tmp_unico >> int_unico;

            cout << int_nums + int_unico << endl;
        } else if(cadena.length()==1){
            cout << cadena.c_str() << endl;
        }
        instancias--;
    }

    return 0;
}