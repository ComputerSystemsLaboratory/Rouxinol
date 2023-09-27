#include<iostream>
using namespace std;

int time1 = 0;
int a[110][110] = {};
int d[110] = {};
int f[110] = {};
int n;
int p;

void dfs(int cur){
  if(d[cur]==0){
    d[cur] = time1;
  }
  time1 += 1;
  f[cur] = time1;

  for(int dst=1;dst<=n;dst++){
    if(a[cur][dst]==1&&d[dst]==0){
      a[cur][dst]=2;
      dfs(dst);
    }
  }
  for(int k=1;k<=n;k++){
    if(a[k][cur]==2){
      a[k][cur]=1;
      p+=1;
      dfs(k);
    }else{
      p=0;
    }
  }
  if(p==0){
    for(int k=1;k<=n;k++){
      if(d[k]==0){
	time1+=1;
	dfs(k);
      }
    }
  }
}

int main(){
  cin>>n;
  for(int i=1;i<=n;i++){
    int u,k;
    cin>>u>>k;
    for(int j=0;j<k;j++){
      int v;
      cin>>v;
      a[i][v]=1;
    }
  }
  time1 += 1;
  dfs(1);
  for(int k=1;k<=n;k++){
    cout<<k<<" "<<d[k]<<" "<<f[k]<<endl;
  }
}