#include <bits/stdc++.h>
using namespace std;

int main() {
   int serieFibo[] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765};
   int a, b, count=0;

   cin >> a >> b;

   for(int numero=0; numero<= size(serieFibo)-1; numero++){

       if(serieFibo[numero] > a && serieFibo[numero] < b){
           count+=1;
        }
   }

   cout << count;

    return 0;
}
