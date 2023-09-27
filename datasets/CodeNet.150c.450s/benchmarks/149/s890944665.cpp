#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
//#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=1000000009;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int par[10004];
int rnk[10004];

void init(int n){
  rep(i,n){
    par[i]=i;
    rnk[i]=0;
  }
}

int find(int x){
  if(par[x]==x)return x;
  else return par[x]=find(par[x]);
}

void unite(int x,int y){
  x=find(x);
  y=find(y);
  if(x==y)return;
  if(rnk[x]<rnk[y])par[x]=y;
  else{
    par[y]=x;
    if(rnk[x]==rnk[y])rnk[x]++;
  }
}

bool same(int x,int y){
  return find(x)==find(y);
}

signed main(){
  int n,q;
  cin>>n>>q;
  init(n);
  rep(i,q){
    int com,x,y;
    cin>>com>>x>>y;
    if(com){
      cout<<same(x,y)<<endl;
    }else{
      unite(x,y);
    }
  }
  return 0;
}