#include <bits/stdc++.h>
using namespace std;

stack<int> posfijo;

int main() {
    string str_numeros;
    int int_num;

    while (cin >> str_numeros){


        if (str_numeros == "^") {
            int n1 = posfijo.top();
            posfijo.pop();
            int n2 = posfijo.top();
            posfijo.pop();

            int tpm_pow = pow(n2,n1);

            /*
            if(isgreater(n1, n2)) tpm_pow = pow(n1, n2);
            else tpm_pow = pow(n2, n1);
             */

            posfijo.push(tpm_pow);

        }
        else if (str_numeros == "/") {
            int n1 = posfijo.top();
            posfijo.pop();
            int n2 = posfijo.top();
            posfijo.pop();
            int tpm_div=n2/n1;

            /*
            if(isgreater(n1, n2)) tpm_div= n1/n2;
            else tpm_div = n2/n1;
             */

            posfijo.push(tpm_div);

        }
        else if (str_numeros == "*") {
            int n1 = posfijo.top();
            posfijo.pop();
            int n2 = posfijo.top();
            posfijo.pop();

            int tpm_multi = n1*n2;

            posfijo.push(tpm_multi);

        }
        else if (str_numeros == "+") {
            int n1 = posfijo.top();
            posfijo.pop();
            int n2 = posfijo.top();
            posfijo.pop();

            int tmp_suma = n1+n2;

            posfijo.push(tmp_suma);

        }
        else if (str_numeros == "-") {
            int n1 = posfijo.top();
            posfijo.pop();
            int n2 = posfijo.top();
            posfijo.pop();

            int tpm_resta= n2-n1;

            /*
            if(isgreater(n1, n2)) tpm_resta=n1-n2;
            else tpm_resta = n2-n1;
            */

            posfijo.push(tpm_resta);

        }
        else {

            //sscanf lee una entrada de caracteres recibe 3 argmentos
            //1: realiza la conversion
            //2: da el formato a entero
            //3: almacena dicho valor en una variable asignada
            sscanf(str_numeros.c_str(), "%d", &int_num);

            posfijo.push(int_num);
        }
    }

    cout << posfijo.top() << endl;

    return 0;
}
