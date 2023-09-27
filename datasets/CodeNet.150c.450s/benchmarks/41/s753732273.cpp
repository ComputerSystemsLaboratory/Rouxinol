#include <bits/stdc++.h>
using namespace std;

int main() {
   int V,E;
   cin >> V >> E;
   vector<vector<pair<int,int>>> G(V);
   for (int i=0; i<E; i++) {
       int s,t,d;
       cin >> s >> t >> d;
       G[s].push_back({t,d});
   }


   long long dp[V][V];
   for (int i=0; i<V; i++) {
       for (int j=0; j<V; j++) {
           dp[i][j]=100000000000;
           if (i==j) dp[i][j]=0;
       }
   }
   for (int i=0; i<V; i++) {
       for (auto a:G[i]) {
           dp[i][a.first]=a.second;
       }
   }
   for (int k=0; k<V; k++) {
       for (int i=0; i<V; i++) {
           for (int j=0; j<V; j++) {
               dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
               //cout << k << " " << i << " " << j << " " << dp[i][j] << endl;
           }
       }
   }
   bool a=true;

   for (int i=0; i<V; i++) {
       if (dp[i][i]<0) {
           cout << "NEGATIVE CYCLE" << endl;a=false;break;
       }
   }
   if (a){
   for (int i=0; i<V; i++) {
       for (int j=0; j<V; j++) {
           if (j!=V-1) {
               if (dp[i][j]>=10000000000) cout << "INF" << " ";
               else cout << dp[i][j] << " ";
           }
           else if (dp[i][j]<10000000000) cout << dp[i][j] << endl;
           else cout << "INF" << endl;
       }
   }
   }
}
