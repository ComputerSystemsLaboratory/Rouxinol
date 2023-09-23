#include <iostream>
#include <math.h>
using namespace std;


int main() {
    int E,x,y,z,m;
    while (cin >> E && E>0) {
       m = 1000000;
       for (int i = 0 ; i <= 100 ; i++) {
           for (int j = 0 ; j <= 1000 ; j++){
               x = E - i*i*i - j*j;
               if (x+j+i<=m && x>=0) m = x+j+i;
           }
       }
       cout << m <<endl;
    }
}

