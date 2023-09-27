#include <iostream>
using namespace std;
#define INF 2000000001
#define MAX_V 100
int d[MAX_V][MAX_V];

int main(void){
  int v,e;
  cin>>v>>e;
  for(int i=0;i<v;i++){
      for(int j=0;j<v;j++){
          d[i][j]=INF;
          if(i==j)d[i][j]=0;
      }
  }
  for(int i=0;i<e;i++){
      int s,t,c;
      cin>>s>>t>>c;
      d[s][t]=c;
  }
    for(int k=0;k<v;k++){
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(d[i][k]<INF&&d[k][j]<INF)
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
    for(int i=0;i<v;i++){
        if(d[i][i]<0){
            cout<<"NEGATIVE CYCLE"<<endl;
            return 0;
        }
    }
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(d[i][j]==INF)cout<<"INF";
            else cout<<d[i][j];
            
            if(j!=v-1)cout<<" ";
        
        }
        cout<<endl;
    }
}