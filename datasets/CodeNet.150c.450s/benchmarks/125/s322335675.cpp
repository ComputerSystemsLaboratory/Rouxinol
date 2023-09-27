#include<iostream>
#include<cstdio>
#define N 101
using namespace std;

int g[N][N]; 
int d[N];
int f[N];
int n;
int times=0;
bool us[N];

//dfs
void dfs(int x){
  
  times++;
  d[x]=times;

  for(int i=1;i<=n;i++){
    if(g[x][i]==1 &&us[i]==false){
      us[i]=true;
      // cout <<"i "<<i<<endl;
      dfs(i);
    }
  } 
  f[x]=times=times+1;

}


int main(){
  
  int n2,data,u;

  //load n
  cin >>n;
  
  //initialize
  for(int i=0;i<N;i++){
    us[i]=false;
    for(int j=0;j<N;j++){
      g[i][j]=0;
    }
  }
  
  //load data
  for(int i=0;i<n;i++){
    scanf("%d%d",&u,&n2);
    for(int j=0;j<n2;j++){
      scanf("%d",&data);
      g[u][data]=1;
    }
  }
  
  //execute
  for(int i=1;i<=n;i++){
    if(us[i]==false) {
      us[i]=true;
      dfs(i);
    } 
 }
  //print
  for(int i=1;i<=n;i++){
    printf("%d %d %d\n",i,d[i],f[i]);
  }
  
  return 0;
}