#include <bits/stdc++.h>
using namespace std;


int main() {
     int n;
     cin >> n;
     map<int,int>m;
     long long ans = 0;
     for(int i = 0;i < n;i++){
          int a;
          cin >> a;
          m[a]++;
          ans += a;
     }
     int q;
     cin >> q;
     for(int i = 0;i < q;i++){
         int b,c;
         cin >> b >> c;
         int bc = m[b];
         m[c] += bc;
         m[b] = 0;
         ans += (c - b) * bc;

         cout << ans << endl;
     }
}