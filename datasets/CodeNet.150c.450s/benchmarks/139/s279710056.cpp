#include <bits/stdc++.h>

using namespace std;
using Graph = vector<vector<int>>;
using Grid= vector<vector<char>>;
using vin= vector<int>;
using ll=long long;
using vll= vector<ll>;
using vbl=vector<bool>;
using vch=vector<char>;
using pnn=pair<int ,int>;

#define ft first
#define sd second
#define fn front
#define pb push_back
#define it insert
#define count ct
#define si(v) int((v).size())
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rell(i,n) for (ll i=0; i< (ll)(n); i++)
#define sot(x) sort(x.begin(), x.end())
#define rese(x) reverse(x.begin(), x.end())
#define vnn(x,y,s,name) vector<vector<int>> name(x, vector<int>(y,s))
#define mse(x) memset(x, 0, sizeof(x))
#define mii(x,y,z) min(x,min(y,z))
#define maa(x,y,z) max(x,max(y,z))

string yes="Yes",no="No";

int main() {
   int n,m;
   cin>>n>>m;
   Graph G(n);
   rep(i,m){
       int a,b;
       cin>>a>>b;
       a--; b--;
       G[a].pb(b);
       G[b].pb(a);
   }
   vin ans(n,-1);
   queue<int> q;
   vbl seen(n,0);
   q.push(0);
   while(!q.empty()){
       int i=q.fn();
       q.pop();
       seen[i]=true;
       for(auto x:G[i]){
           if(seen[x]) continue;
           q.push(x);
           seen[x]=true;
           ans[x]=i+1;
       }
   }
   rep(i,n){
       if(i==0) cout<<yes<<endl;
       else cout<<ans[i]<<endl;
   }
   
}
