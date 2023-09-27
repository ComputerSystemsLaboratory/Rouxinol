#include <iostream>
#include <cstdio>
using namespace std;


int V, E, R, S[500010], T[500010], D[500010];
int C[100010];

const int inf = 10000*100000+100;

int main(){
  cin >> V >> E >> R;
  for (int i = 0; i < E; ++i)
  {
    cin >> S[i] >> T[i] >> D[i];
  }
  for (int i = 0; i < V; ++i)
  {
    if(i!=R){
      C[i]=inf;
    }else{
      C[i] = 0;
    }
  }
  // for (int t = 0; t < V; ++t)//Vは街の数
  while(true)
  {
    bool update = false;
    for (int i = 0; i < E; ++i)//Eは辺の数
    {
      int s=S[i], t=T[i], d=D[i];
      if(C[s]<inf &&(C[s]+d <C[t]) ){
        C[t]=C[s]+d ;
        update = true;
      }
    }
    if(!update) break;
  }

  for (int i = 0; i < V; ++i)
  {
    if (inf==C[i])
    {
      cout <<"INF"<<endl;
    }else{
      cout <<C[i]<<endl;
    }
  }
}