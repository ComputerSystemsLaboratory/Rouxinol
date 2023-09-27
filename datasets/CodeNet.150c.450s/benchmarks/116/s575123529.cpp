#include <bits/stdc++.h>
using namespace std;
const long long INF = 1LL<<60;//仮想的な無限大の値

int main() {
   int n,k;
   while(cin >> n >> k){
       if(n==0) break;
       vector<int> a(n);//普通の数字
       for(int i=0;i<n;i++){
           cin >> a[i];
       }
       vector<int> s(n+1,0);//n+1個の配列を全て0で初期化
       for(int j=0;j<n;j++){
           s[j+1] = s[j] + a[j];
       }
       int ans = -INF;
       for(int p=1;p<n-k+1;p++){
           int max1 = s[p+k] - s[p];
           ans = max(max1,ans); 
       }
       cout << ans << endl;
   }
}
