#include<iostream>
#include<cstdio>
#include<climits>
using namespace std;

#define N 130
int n;

int g[N][N];

int weight[N];
bool us[N];

//prim
void prim(){

  int v;
 
  weight[0]=0;
  
  while(true){
    v=-1;
   
    for(int i=0;i<n;i++){
      if(us[i]!=true && (v==-1 ||weight[i]<weight[v]))v=i;
    }

    if(v==-1)break;
    us[v]=true;
 

    for(int i=0;i<n;i++){
      if(weight[i]>(g[v][i]+weight[v])){

        weight[i]=(g[v][i]+weight[v]);
        //      cout <<"fsafa"<<endl;
      }
    }
  }
 
}


int main(){

  int u,k1,c,v;

  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      g[i][j]=9953535;
    }
  }

  //load n
  cin >>n;

  //load data
  for(int i=0;i<n;i++){
    weight[i]=INT_MAX;
    us[i]=false;
    scanf("%d %d",&u,&k1);
    for(int j=0;j<k1;j++){
      scanf("%d %d",&v,&c);
      g[u][v]=c;
      //    cout <<g[i][j]<<" ";
    }
    //    cout <<endl;
  }




  //print
  prim();

  for(int i=0;i<n;i++){
    cout <<i<<" "<<weight[i]<<endl;
  }
  return 0;

}