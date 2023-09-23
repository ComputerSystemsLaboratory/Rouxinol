#include <iostream>
using namespace std;
    long long rec(long long x, long long y){
    if(y == 1) return x;
    else if(y%2 == 1) {return rec(x*x%1000000007, y/2)*x%1000000007;}
    else {return rec(x*x%1000000007, y/2);}
    }

int main(void){
   long long m,n;
   cin >> m >> n;
   cout << rec(m, n)<<endl;
   return 0;
}

