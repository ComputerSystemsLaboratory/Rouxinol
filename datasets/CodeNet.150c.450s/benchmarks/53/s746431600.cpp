#include <bits/stdc++.h>
using namespace std;


int main() {
   int n;
   cin >> n;
   vector<int> p;
   cout << n << ':' ;
   int count=0;
       for (int i=2; i<=n; i+=2) {
           if (i>sqrt(n)) {cout << ' ' << n ;break;}
           bool a=false;
           for (int j=0; j<p.size(); j++) {
               if (p[j]>sqrt(i)) break;
               if (i%p[j]==0) {
                   a=true;break;
               }
           }
           if (a) continue;
           p.push_back(i);
           while (n%i==0) {
               n/=i;
               cout << ' ' << i;
           }
           if (i==2) i--;
       }
       cout << endl;
}
