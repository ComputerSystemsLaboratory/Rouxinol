#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
#define INF 999999999
#define rep(i,n) for(int i=0;i<n;i++)
const ll MOD = 1000000007;
ll cnt =0,ans=0;
const int MAX = 510000;

int main(){
   int n , m;
   cin >> n >> m;
   int a,b;
   vector<int>to[100010];
   for(int i=0;i<m;i++){
       cin >> a >> b;
       a--; b--;
       to[a].push_back(b);
       to[b].push_back(a);
   }
   
   queue<int>q;
   vector<int>dist(n,INF);

   vector<int>pre(n,-1);
   dist[0] = 0;
   q.push(0);

   while(!q.empty()){
       int v = q.front();q.pop();
       for(int u : to[v]){
           if(dist[u]!=INF)continue;
           dist[u] = dist[v] +1;
           pre[u] = v;
           q.push(u);

       }
       
   }
   cout << "Yes" << endl;
       for(int i=0;i<n;i++){
           if(i == 0)continue;
           ans = pre[i];
           ans++;
           cout << ans << endl;
       }

}
       
