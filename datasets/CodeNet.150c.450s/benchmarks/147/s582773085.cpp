#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int , int> pii;

const int N = 2e5+10 , mod = 1e9+7;

int32_t main(){
   ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   int n;
   cin >> n;
   int ans[n + 1];
   memset(ans , 0 , sizeof(ans));
   for(int i = 1 ; i <= 100 ; i++)
      for(int j = 1 ; j <= 100 ; j++)
         for(int k = 1 ; k <= 100 ; k++)
            if(i * i + j * j + k * k + i * j + i * k + j * k <= n)
               ans[i * i + j * j + k * k + i * j + i * k + j * k]++;
   for(int i = 1 ; i <= n ; i++)
      cout << ans[i] << "\n";
   return 0;
}
