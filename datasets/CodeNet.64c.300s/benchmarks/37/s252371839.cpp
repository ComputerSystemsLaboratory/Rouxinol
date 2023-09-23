#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main(){
   cin.tie(0);
   ios::sync_with_stdio(false);

   int n;

   while(cin >> n){
      if(n == 0) break;
      int ans = 0;
      for(int i = 1; i < n / 2 + 1; ++i){
         int tmp = i;
         for(int j = i + 1; j < n; ++j){
            tmp += j;
            if(tmp > n) break;
            if(tmp == n) ans++;
         }
      }
      cout << ans << endl;
   }

   return 0;
}
