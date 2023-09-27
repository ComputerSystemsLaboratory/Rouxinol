#include<iostream>
#include<stack>
using namespace std;

static const int N=101;
static const int WHITE=0;
static const int GRAY=1;
static const int BLACK=2;

int M[N][N],n; 
int d[N],f[N],color[N];
int tm=0;
int nx[N];

int next(int u){
  for(int v=nx[u];v<n;v++){
    nx[u]=v+1;
    if(M[u][v]) return v;
  }
  return -1;
}

void dfs(int u){
  stack<int> S;
  for(int i=0;i<n;i++) nx[i]=0;

  S.push(u);
  color[u]=GRAY;
  d[u]=++tm;
  
  while(!S.empty()){
    int r=S.top();
    int v=next(r);
    if(v!=-1){
      if(color[v]==WHITE){
	color[v]=GRAY;
	d[v]=++tm;
	S.push(v);
      }
    }else{
      S.pop();
      color[r]=BLACK;
      f[r]=++tm;
    }
  }
}

void solve(){
  for(int i=0;i<n;i++){
    color[i]=WHITE;
    nx[i]=0;
  }
  tm=0;

  for(int i=0;i<n;i++){
    if(color[i]==WHITE) dfs(i);
  }
  for(int i=0;i<n;i++){
    cout<<i+1<<" "<<d[i]<<" "<<f[i]<<endl;
  }
}

int main(){
  int u,k,v;

  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++) M[i][j]=0;
  }

  for(int i=0;i<n;i++){
    cin>>u>>k;
    for(int j=0;j<k;j++){
      cin>>v;
      M[u-1][v-1]=1;
    }
  }

  solve();
  
  return 0;
}