#include<iostream>
#include<cstdio>
#include<climits>
using namespace std;

#define N 120
int n;

int g[N][N];
int mini;
int weight[N];
bool us[N];

int prim(){
  int v;
  int ans=0;
  weight[1]=0;
  
  while(true){
    v=-1;
   
    for(int i=1;i<=n;i++){
      if(us[i]!=true && (v==-1 ||weight[i]<weight[v]))v=i;
    }

    if(v==-1)break;
    us[v]=true;
    ans+=weight[v];

    for(int i=1;i<=n;i++){
      if(weight[i]>g[v][i])weight[i]=g[v][i];
      else weight[i]=weight[i];
    }
  }
  return ans;
}


int main(){

  //load n
  cin >>n;

  //load data
  for(int i=1;i<=n;i++){
    weight[i]=INT_MAX;
    us[i]=false;
    for(int j=1;j<=n;j++){
      scanf("%d",&g[i][j]);
      if(g[i][j]== -1)g[i][j]=INT_MAX;
      //    cout <<g[i][j]<<" ";
    }
    //    cout <<endl;
  }




  //print
  cout <<prim()<<endl;

  return 0;

}