#include <iostream>
using namespace std;
int n,g[100][100],c[100],f[100],e[100],t=1;
void dfs(int now){
  c[now]=1;
  f[now]=t;
  t++;
  for(int i=0;i<n;i++) if(g[now][i]&&c[i]!=1){
      dfs(i);
      t++;
    }
  e[now]=t;
}
int main(){

  int a,b,tmp;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    for(int j=0;j<b;j++){
      cin>>tmp;
      g[a-1][tmp-1]=1;
    }
  }
  for(int i=0;i<n;i++) if(c[i]!=1){
      dfs(i);
      t++;
    }

  for(int i=0;i<n;i++) cout<<i+1<<" "<<f[i]<<" "<<e[i]<<endl;

  return 0;

}