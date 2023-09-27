
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
  int n;
  vector<int> mat[100];
  cin >> n;
  for(int i=0;i<n;i++){
    int u,k;
    cin >> u >> k;
    for(int j=0;j<k;j++){
      int v;
      cin >> v;
      mat[i].push_back(v-1);
    }
  }

  int d[100];
  for(int i=0;i<n;i++) d[i]=(-1);

  queue<int> nb;
  nb.push(0);
  d[0]=0;

  while(!nb.empty()){
    for(vector<int>::iterator it=mat[nb.front()].begin();it!=mat[nb.front()].end();it++){
      if(d[*it]==-1){
        d[*it]=d[nb.front()]+1;
        nb.push(*it);
      }
    }
    nb.pop();
  }

  for(int i=1;i<=n;i++)
    cout << i << ' ' << d[i-1] << endl;
  
  return 0;
}