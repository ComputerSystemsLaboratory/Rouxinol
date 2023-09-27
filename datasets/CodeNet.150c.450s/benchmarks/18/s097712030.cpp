#include <iostream>
#include <math.h>

using namespace std;

int main() {
   double v = 100000;
   double r;
   int n;

   cin >> n;

   for(int i = 0; i < n; i++) {       
       v += v * 0.05;
       r = fmod(v, 1000.0);          
        if(r != 0) {
            v += (1000 - r);
        }
   }
n = v;

   cout << n << endl;

    return 0;

}