#include<iostream>
#define N 101
using namespace std;

int n,d[N][N],m[N],f[N],s[N],ti;
void dfs(int t){
  if(s[t]==1) return;
  ti++,m[t]+=ti,s[t]=1;
  for(int i=1;i<=n;i++) if(d[t][i]==1 && s[i]==0)dfs(i);
  ti++,f[t]+=ti;
}

int main(){
  int nx,s,fst;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>fst>>nx;
    for(int j=0;j<nx;j++){
      cin>>s;
      d[fst][s]=1;
    }
  }
  for(int i=1;i<=n;i++) dfs(i);
  for(int i=1;i<=n;i++) cout<<i<<" "<<m[i]<<" "<<f[i]<<endl;
  
  return 0;
}