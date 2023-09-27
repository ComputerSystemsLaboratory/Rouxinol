#include <iostream>
#include <queue>
using namespace std;
#define INF 9999999

int graph[101][101];
int dis[101]; //距離を格納
bool check[101];//訪問済みチェック
int main(){
  int n;
  cin>>n;
  fill(dis,dis+101,INF);
  dis[1]=0;
  check[1]=true;
  for(int i=0;i<n;i++){
    int u,k,v;
    cin>>u>>k;
    for(int j=1;j<=k;j++){
      graph[u][0]=k;
      cin>>graph[u][j];
    }
  }
  queue<int> qu;
  qu.push(1);
  while(!qu.empty()){
    int num=qu.front(); qu.pop();
    for(int j=1;j<=graph[num][0];j++){
      int temp=graph[num][j];
      if(check[temp]){//訪問済みならば
        continue;
      }else{
        check[temp]=true;
      }
      dis[temp]=dis[num]+1;
      qu.push(temp);
    }
  }
  //表示部
  for(int i=1;i<=n;i++){
    cout<<i<<" ";
    if(dis[i]>=INF)cout<<-1<<"\n";
    else  cout<<dis[i]<<"\n";
  }
}

