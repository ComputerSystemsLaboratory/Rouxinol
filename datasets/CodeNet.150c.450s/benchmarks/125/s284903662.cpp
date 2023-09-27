#include <iostream>
using namespace std;
int g[101][102],ch[101][2]={0},kh;

int dfs(int k,int n){
  ch[n][0]=k;
  //cout<<k<<n<<"<--"<<endl;/////////
  for(int i=1;i<=g[n][0];i++){
    if(ch[g[n][i]][0]==0){
      k=dfs(k+1,g[n][i]);
    }
  }
  ch[n][1]=k+1;
  kh=k+1;
  return k+1;
}

int main(){
  int a,b,c,d;
  cin>>a;
  for(int i=0;i<a;i++){
    cin>>b>>c;
    g[b][0]=c;
    for(int j=1;j<=c;j++){
      cin>>d;
      g[b][j]=d;
    }
  }
  kh=0;
  for(int i=1;i<=a;i++){
    if(ch[i][0]==0){
      //cout<<i<<"<--"<<endl;////////
      dfs(kh+1,i);
    }
  }
  
  for(int i=1;i<=a;i++){
    cout<<i<<" "<<ch[i][0]<<" "<<ch[i][1]<<endl;
    
  }
  return 0;
}