#include<bits/stdc++.h>
using namespace std;

int cost[100][100];
int d[100];//??????s?????????????°??????¢
bool used[100];
int arrow;//????????°

const int INF = 10000000;

void dijkstra(){
  fill(d,d+arrow,INF);
  fill(used,used + arrow,false);
  d[0] = 0;

  while(1){
    int v=-1;
    // ???????????????????????????????????????????????¢???????°???????????????¢???
    for(int u=0;u<arrow;u++){
      if(!used[u] && (v == -1 || d[u] < d[v])) v = u;
    }

    if(v == -1) break;

    used[v] = true;

    for(int u=0; u<arrow; u++){
      if(cost[v][u] != INF){
        d[u] = min(d[u],d[v] + cost[v][u]);
      }
    }
  }

  for(int u=0; u<arrow; u++){
    cout << u << " " << d[u] << endl;
  }

}

int main(){

    cin >> arrow;

    int n,a,v,c;



    for(int i=0;i<arrow;i++){
      for(int j=0;j<arrow;j++){
        cost[i][j] = INF;
      }
    }

    /*for(int i=0; i<arrow; i++){
      cost[i][i] = 0;
    }*/

    for(int u=0;u<arrow;u++){

      cin >> n >> a;

      for(int i=0; i<a;i++){
        cin >> v >> c;
        cost[n][v] = c;
      }
    }

    dijkstra();

    return 0;
}