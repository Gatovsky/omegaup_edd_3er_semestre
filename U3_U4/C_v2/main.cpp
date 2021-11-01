#include <bits/stdc++.h>
using namespace std;

int main() {
    int instancias, index=0; //index_sumas=0;
    string numero; //zero("0");

    cin >> instancias;
    vector<string> vectorString(abs(instancias));
    list<int> sumas;

    if(instancias>=0 && instancias<=1000){
        while (instancias > 0){
            cin >> numero;
            //cout << "numero: " << numero << endl;
            //size_t found = numero.find(zero);
            if(numero.length()>1){
                //cout << "numero2: " << numero << endl;
                if(numero[0] !='0'){
                    //cout << "numero3: " << numero << endl;
                    vectorString[index++]=numero;
                }
            }else{
                vectorString[index++]=numero;
            }
            instancias--;
        }

        //cout << "vectorString.size(): " << vectorString[1] << endl;
        //iterar el vectorString
        for(int i=0; i<=vectorString.size()-1; i++){
            //cout << vectorString[i] << " ";
            priority_queue<char> digitos;

            if(!vectorString[i].empty()){
                //pasar los digitos de cada elemento a la cola de prioridad
                for(int j=0; j<=vectorString[i].length()-1; j++){
                    //cout << "vectorString[i][j]: " << vectorString[i][j] << endl;
                    digitos.push(vectorString[i][j]);
                }

                int char_length = 1;
                string digitosConcatenados, unico_digito;

                //concatenar todos los digitos excepto el último
                if(digitos.size()>1){
                    for(unsigned long k=digitos.size()-1; k>0; k--){
                        string tmp_string(char_length, digitos.top());
                        digitos.pop();
                        digitosConcatenados+=tmp_string;
                    }
                    string tmp_ultimo(char_length, digitos.top());
                    digitos.pop();

                    stringstream concat_str, ultimo_str;
                    int concat_int, ultimo_int;
                    concat_str << digitosConcatenados;
                    concat_str >> concat_int;
                    ultimo_str << tmp_ultimo;
                    ultimo_str >> ultimo_int;

                    sumas.push_back(concat_int + ultimo_int);
                } else{
                    string tmp_unico(char_length, digitos.top());
                    digitos.pop();

                    stringstream unico_str;
                    int unico_int;
                    unico_str << tmp_unico;
                    unico_str >> unico_int;

                    sumas.push_back(unico_int);
                }
            }
        }

        for(int i : sumas){
            cout << i << endl;
        }
    }
    return 0;
}
