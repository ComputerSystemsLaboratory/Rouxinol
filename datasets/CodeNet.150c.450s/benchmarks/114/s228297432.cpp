#include<iostream>
#define N 100
#define INF 1000000
using namespace std;

int main(){
  int n,g[N][N],used[N]={},d[N]={},p[N];
  cin>>n;
  for(int i=0;i<n;i++){
    d[i]=INF,p[i]=-1;
    for(int j=0;j<n;j++){
      cin>>g[i][j];
      if(g[i][j]==-1) g[i][j]=INF;
    }
  }
  d[0]=0;
  
  while(1){
    int j=-1,min=INF;
    for(int i=0;i<n;i++)if(!used[i] && d[i]<min)min=d[i],j=i;
    if(j==-1) break;
    used[j]=1;
    for(int k=0;k<n;k++)
      if(!used[k] && g[j][k]!=INF)if(g[j][k]<d[k])d[k]=g[j][k],p[k]=j;
  }
int ans=0;
for(int i=0;i<n;i++)if(p[i]!=-1)ans+=g[i][p[i]];
cout<<ans<<endl;
 
 return 0;
}