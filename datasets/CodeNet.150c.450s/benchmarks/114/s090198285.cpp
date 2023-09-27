#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define int long long
#define MAX 100
#define NIL -1
using namespace std;
const int INF=1000000007;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int M[102][102];
int mincos[102];
bool used[102];
int n;

int prim(){
  rep(i,n){
    mincos[i]=INF;
    used[i]=false;
  }
  mincos[0]=0;
  int sum=0;
  while(1){
    int  v=-1;
    rep(i,n){
      if(used[i]==false&&(v==-1||mincos[i]<mincos[v]))v=i;
    }
    if(v==-1)break;
    used[v]=true;
    sum+=mincos[v];
    rep(i,n)mincos[i]=min(mincos[i],M[v][i]);
  }
  return sum;
}

signed main(){
  cin>>n;
  rep(i,n)rep(j,n){
    int e;
    cin>>e;
    M[i][j]=(e==-1?INF:e);
  }
  cout<<prim()<<endl;

  return 0;
}