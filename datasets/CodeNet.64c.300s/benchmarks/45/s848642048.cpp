#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main(){
   cin.tie(0);
   ios::sync_with_stdio(false);

   int n, m, p;
   while(cin >> n >> m >> p){
      int a[n], buy = 0;
      if(n == 0 && m == 0 && p == 0) break;
      rep(i,n){
         cin >> a[i];
         buy += a[i];
      }
      if(a[m - 1] == 0) cout << 0 << endl;
      else cout << (100 * buy - buy * p) / a[m - 1] << endl;
   }

   return 0;
}
