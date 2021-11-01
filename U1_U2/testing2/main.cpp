#include<bits/stdc++.h>
using namespace std;

//buscar la interseccion de ambos par de puntos coordenados
vector<vector<long long>> Intersec(vector<vector<long long>>&R1, vector<vector<long long>>&R2){
    vector<vector<long long>> array2D;
    vector<long long> v1, v2;
    if(max(R1[0][0], R2[0][0]) < min(R1[1][0], R2[1][0]) && max(R1[0][1], R2[0][1]) < min(R1[1][1], R2[1][1])){
        v1.push_back(max(R1[0][0], R2[0][0])); v1.push_back(max(R1[0][1], R2[0][1]));
        v2.push_back(min(R1[1][0], R2[1][0])); v2.push_back(min(R1[1][1], R2[1][1]));
        array2D.push_back(v1); array2D.push_back(v2);
    };
    return array2D;
}

//calcular el area con principio de inclusión y exclusión
long long Area(vector<vector<long long>>&vect){
    return (vect[1][0] - vect[0][0]) * (vect[1][1] - vect[0][1]);
}

int main(){
    int x1, y1, x2, y2;
    vector<vector<long long>>R1, R2, Inter;
    vector<long long>vector1_1D,vector2_1D;
    long long AR1, AR2, AInter, ATotal;

    cin >> x1 >> y1 >> x2 >> y2;
    vector1_1D.push_back(x1); vector1_1D.push_back(y1);
    vector2_1D.push_back(x2); vector2_1D.push_back(y2);
    R1.push_back(vector1_1D); R1.push_back(vector2_1D);

    vector1_1D.clear(); vector2_1D.clear();

    cin >> x1 >> y1 >> x2 >> y2;
    vector1_1D.push_back(x1); vector1_1D.push_back(y1);
    vector2_1D.push_back(x2); vector2_1D.push_back(y2);
    R2.push_back(vector1_1D); R2.push_back(vector2_1D);

    Inter=Intersec(R1,R2);

    AR1 = Area(R1);
    //cout << "AR1: " << AR1 << endl;
    AR2 = Area(R2);
    //cout << "AR2: " << AR2 << endl;
    if(!Inter.empty()){
        AInter= Area(Inter);
    } else AInter=0;
    //cout << "AInter: " << AInter << endl;

    ATotal = AR1+AR2-AInter;

    cout << ATotal;

    return 0;
}