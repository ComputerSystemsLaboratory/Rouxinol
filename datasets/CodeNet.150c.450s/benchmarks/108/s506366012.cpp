#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
  vector<int> G[100];
  queue<int> q;
  vector<int> d(100,-1);
  int n,u,k,v,depth;
  bool flg;
  
  cin >> n;
  for (int i=0;i<n;i++){
    cin >> u>> k;
    for (int j=0;j<k;j++){
      cin >> v;
      G[u-1].push_back(v-1);
    }
  }
  depth=0;
  q.push(0);
  d[0]=depth;
  while (!q.empty()){
    u=q.front();
    for (int i=0;i<G[u].size();i++){
      v=G[u][i];
      if (d[v]==-1){
	q.push(v);
	d[v]=d[u]+1;
	flg=true;
	break;
      }
    }
    if (!flg){
      q.pop();
    }else{
      flg=false;
    }
  }
    
  for (int i=0;i<n;i++)
    cout << i+1 <<" "<< d[i]<<endl;
  
  return 0;
}