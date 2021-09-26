//
// programa que cuenta las letras en un determinado rango
// ENTRADA: dos números enteros: I (inicio), F (final); una cadena de texto
// SALIDA: Para cada letra en el abecedario, el número de caracteres que contiene esa porción de texto.
//

#include <iostream>
#include <string>
#include <map>

using namespace std;

template<typename MaP>
void imprimirMap(MaP& abecedario){
    for(auto &i : abecedario){
        cout << i.first << "=" << i.second <<endl;
    }
}

template<typename MaP2>
map<char, int> buscarLetras(MaP2& abecedario, int& I, int&F, string& frase){
    map<char, int> r;
    map<char, int>::iterator it; //se declara un iterador de tipo map<char, int>
    for (int j=I; j<=F; j++){    //ciclo for en un rango establecido por el usuario
        char x = frase[j];      //variable x que almacenará una letra de la frase dada la posición de j
        char fst;
        //int scnd; //[NOT USING]
        for(it = abecedario.begin(); it != abecedario.end(); it++){  //iteración del map
            fst = it->first;   //la variable fst almacena las key
            //scnd = it->second; //la variable scnd almacena los values [NOT USING]
            if(fst == x) {    //comparación de la key del map con la letra de la frase
                //scnd += 1; //[NOT USING]
                abecedario[fst]+=1;  //si es True se le sumará un valor al value perteneciente de la key
            }
        }
        r = abecedario; //el map con los nuevos valores es reasignado en r
    }
    return r;
}

int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    string frase;
    int I, F;

    cin >> I, cin >> F;
    cin.ignore();
    getline(cin, frase);

    map<char, int> abecedario = {
            {'a', 0},{'b', 0},{'c', 0},{'d', 0},{'e', 0},{'f', 0},
            {'g', 0},{'h', 0},{'i', 0},{'j', 0},{'k', 0},{'l', 0},
            {'m', 0},{'n', 0},{'o', 0},{'p', 0},{'q', 0},{'r', 0},
            {'s', 0},{'t', 0},{'u', 0},{'v', 0},{'w', 0},{'x', 0},
            {'y', 0},{'z', 0}
    };

    //llamadas de los métodos
    map<char, int> letrasEncontradas = buscarLetras(abecedario, I, F, frase);
    imprimirMap(letrasEncontradas);

    return 0;
}
