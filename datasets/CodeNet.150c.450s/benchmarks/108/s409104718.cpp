#include <iostream>
#include <queue>
using namespace std;

int main(){

  bool adj[100][100]={};//初期化を忘れない
  int d[100]={};
  int n,u,v,k;

  cin >> n;
  for (int i=0; i<n; i++){
    cin >> u >> k;
    for (int j=0; j<k; j++){
      cin >> v;
      adj[u-1][v-1] = true;
    }
  }
  
  queue<int> q;
  bool pushed[100]={};
  q.push(1);
  pushed[1-1] = true;
  d[0] = 0;

  while(q.empty() == false){
    u = q.front();
    q.pop();
    for (int i=0; i<n; i++){
      if (adj[u-1][i]){
	if (pushed[i] != true){
	  d[i] = d[u-1] + 1;
	  q.push(i+1);
	  pushed[i] = true;
	}
      }
    }
  }
  
  cout << 1 << " " << 0 << endl;
  for (int i=1; i<n; i++){
    if (d[i] == 0)
      cout << i+1 << " " << -1 << endl;
    else
      cout << i+1 << " " << d[i] << endl;      
  }

}