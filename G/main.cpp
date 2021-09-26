#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, x2, y2, a1, b1, a2, b2;
    //int poligono1[2][2], poligono2[2][2], interseccion[2][2];
    //int detPol1, detPol2, detInter;
    int areaPol1, areaPol2, areaInter;
    int pCruzPol1, pCruzPol2, pCruzInter;
    unsigned int areaTotal;


    cin >> x1 >> y1 >> x2 >> y2 >> a1 >> b1 >> a2 >> b2;

    /*
    poligono1[0][0]=x1;
    poligono1[0][1]=y1;
    poligono1[1][0]=x2;
    poligono1[1][1]=y2;

    poligono2[0][0]=a1;
    poligono2[0][1]=b1;
    poligono2[1][0]=a2;
    poligono2[1][1]=b2;
    */

    pCruzPol1 = ((x1*y1)+(x2*y2)+(x2*y2)+(x1*y1))+(-(y1*x2)-(y1*x2)-(y2*x1)-(y2*x1));
    //cout << pCruzPol1 << endl;
    pCruzPol2 = ((a1*b1)+(a2*b2)+(a2*b2)+(a1*b1))+(-(b1*a2)-(b1*a2)-(b2*a1)-(b2*a1));
    //cout << pCruzPol2 << endl;
    pCruzInter =((a1*b1)+(x2*y2)+(x2*y2)+(a1*b1))+(-(b1*x2)-(b1*x2)-(y2*a1)-(y2*a1));
    //cout << pCruzInter << endl;

    areaPol1 = pCruzPol1/2;
    areaPol2 = pCruzPol2/2;
    areaInter = pCruzInter/2;
    areaTotal = (areaPol1+areaPol2)-areaInter;

    cout << areaTotal << endl;

    //cout<<poligono1[0][0] <<poligono1[0][1]<<poligono1[1][0]<<poligono1[1][1] <<endl;
    //cout<<poligono2[0][0] <<poligono2[0][1]<<poligono2[1][0]<<poligono2[1][1] <<endl;


    return 0;
}
