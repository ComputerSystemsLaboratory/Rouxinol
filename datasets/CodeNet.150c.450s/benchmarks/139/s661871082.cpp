/**Bismillahir Rahmanir Raheem
    Author:Refatul Fahad**/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ff first
#define ss second
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define pil pair<int,ll>
const int N = 1e5 + 5;
const ll M = (ll)1e9 + 7;
const double pi=2*acos(0.0);
const double esp=1e-9;
int Set(int N,int pos) {
    return N=N | (1<<pos);
}
int reset(int N,int pos) {
    return N= N & ~(1<<pos);
}
bool check(int N,int pos) {
    return (bool)(N & (1<<pos));
}

int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};

vi adj[2*N];
bool vis[N];
int cnt=0,dis[N];
void bfs(int node){
   queue<int>q;
   q.push(node);
   vis[node]=true;
   dis[1]=0;
   while(!q.empty()){
      int n=q.front();
      q.pop();
      for(int x:adj[n]){
        if(!vis[x]){
            q.push(x);
            vis[x]=true;
            dis[x]=n;
            cnt++;
        }
      }
   }
}
int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    /// freopen("input.txt","r",stdin);
    /// freopen("output.txt","w",stdout);

    int test=1;
    //cin>>test;
    for(int cs=1; cs<=test; ++cs) {
       int n,m;
       cin>>n>>m;
       for(int i=1;i<=m;++i){
        int x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
       }
       bfs(1);

       if(cnt<n-1){
        cout<<"No"<<endl;
       }
       else{
        cout<<"Yes"<<endl;
        for(int i=2;i<=n;++i){
            cout<<dis[i]<<endl;
        }
       }
    }
    return 0;
}

