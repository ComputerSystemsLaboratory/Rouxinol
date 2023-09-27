#include <iostream>
#include <queue>
using namespace	std;
int main(){

  int n,g[100][100]={},tmp1,amo,tmp2;
  queue <int> q;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>tmp1>>amo;
    for(int j=0;j<amo;j++){
      cin>>tmp2;
      g[tmp1-1][tmp2-1]=1;
    }
  }
  int dis[100]={},flag[100]={1};
  for(int i=0;i<n;i++) if(i) dis[i]=-1;
  q.push(0);
  for(;!q.empty();){
    for(int i=0;i<n;i++) if(g[q.front()][i]&&flag[i]!=1){
        dis[i]=dis[q.front()]+1;
        flag[i]=1;
        q.push(i);
      }
    q.pop();
  }
  for(int i=0;i<n;i++) cout<<i+1<<" "<<dis[i]<<endl;
  return 0;

}