#include <iostream>

using namespace std;

void Mayus(string &array){
    string toMayus;
    for(int linea=0; linea < array.size(); linea++){
        array[linea] = toupper(array[linea]);
        toMayus = array;
    }
    cout << toMayus <<endl;
}

void Minus(string &array){
    string toMinus;
    for(int linea=0; linea < array.length(); linea++) {
        array[linea] = tolower(array[linea]);
        toMinus = array;
    }
    cout << toMinus <<endl;
}

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    string linea1 = "Coding Rush";
    string linea2 = "eXtreMe Programming";
    string linea3 = "Estudia en el ITAM! ;)";

    Mayus(reinterpret_cast<string &>(linea1));
    Minus(reinterpret_cast<string &>(linea1));
    Mayus(reinterpret_cast<string &>(linea2));
    Minus(reinterpret_cast<string &>(linea2));
    Mayus(reinterpret_cast<string &>(linea3));
    Minus(reinterpret_cast<string &>(linea3));

    return 0;
}