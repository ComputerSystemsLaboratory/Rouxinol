#include <iostream>
using namespace std;

int main ()  {
    int A, S=0, T=0, a, b, i;
     for(i=0; i<4; i++) {
         cin >> a;
         S += a;
     }
     for(i=0; i<4; i++) {
         cin >> b;
         T += b;
     }
     A = S>T? S:T;
    cout << A << endl;
}