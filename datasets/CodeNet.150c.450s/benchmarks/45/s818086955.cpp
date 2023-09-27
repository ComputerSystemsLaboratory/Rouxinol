
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main() {
    long long m,n;
    scanf ("%lld %lld",&m,&n);
    long long y,z;
    y=1000000007;
    z=1;
    while(n>=1){
      if(n&1){
        z=(z*m)%y;
      }
      m=(m*m)%y;
      n=n>>1;
    }
    printf("%lld\n",z);

}

