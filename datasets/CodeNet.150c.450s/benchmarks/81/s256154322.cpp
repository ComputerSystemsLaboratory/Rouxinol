#include <cstdio>
#include <utility>
#include <queue>
#include <vector>
#include <iostream> 
#include <algorithm>
#include <math.h>
#include <map>  
#include <string.h> 

using namespace std;

int d[11][11];

const int INF=100000000;

int main() {
  
  while(1){
    
    int E; cin>>E; if(E==0) break;
    
    fill(d[0],d[11],INF);
    
    for(int i=0; i<11; i++){
      d[i][i]=0;
      }
    
    int MAX_V=0;
    
    for(int i=0; i<E; i++){
      
      int u,v,cost; cin>>u>>v>>cost;
      
      if(u>MAX_V) MAX_V=u;
      if(v>MAX_V) MAX_V=v;
      
      d[u][v]=cost; d[v][u]=cost;
      
      }
      
     for(int k=0; k<MAX_V+1; k++)
       for(int i=0; i<MAX_V+1; i++)
         for(int j=0; j<MAX_V+1; j++)  d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
         
       int A,ANS=INF;
        
      for(int i=0; i<MAX_V+1; i++){
        int ans=0;
         for(int j=0; j<MAX_V+1; j++){
           ans+=d[i][j];
           }
           if(ans<ANS) {ANS=ans; A=i;}
         }

      cout<<A<<' '<<ANS<<endl;

    }
     
}