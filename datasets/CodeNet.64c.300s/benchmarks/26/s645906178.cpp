#include <bits/stdc++.h>
using namespace std;

int main() {
   int m,n;
   cin >> m >> n;
   long long count=1;
   long long M=m;
   while(true) {
       if (n==0) break;
       if (n%2==1) {
           count*=M;
           count%=1000000007;
       }
       M*=M;
       M%=1000000007;
       n/=2;
   }
   cout << count << endl;
}
