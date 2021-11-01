#include <bits/stdc++.h>
using namespace std;

int main() {
    int F;
    double i_cali, C1=0.00, C2=0.00, C_Final=0.00;

    cin >> F;
    double materia1[F+1];
    double materia2[F+1];

    int lon = F;
    for(int i=0; i<=lon; i++){
        cin >> i_cali;
        materia1[i]=i_cali;
    }
    for(int i=0; i<=lon; i++){
        cin >> i_cali;
        materia2[i]=i_cali;
    }

    for(int i=0, j=lon; i<=lon;i++, j--){
        C_Final= max(C_Final, (materia1[i]+materia2[j])/2);
    }


    cout << fixed << setprecision(2) << C_Final;

    return 0;
}