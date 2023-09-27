#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
  vector<int> R[100000];
  queue<int> Q;
  int n,m,s,t,q;
  int visit[100000];

  cin >> n >> m;
  for(int i=0;i<m;i++){
    cin >> s >> t;
    R[s].push_back(t);
    R[t].push_back(s);
  }
  
  for(int j=0;j<n;j++) visit[j] = 0;
  for(int i=0;i<n;i++){
    if(visit[i] == 0){
      Q.push(i);
      while(Q.empty() == false){
	int u = Q.front();
	Q.pop();
	visit[u] = 1;
	for(int j=0;j<R[u].size();j++){
	  int v = R[u][j];
	  if(visit[v]==0)Q.push(v);
	}
	R[u].clear();
	R[u].push_back(i);
      }
    }
  }
    
  cin >> q;
  for(int i=0;i<q;i++){
    cin >> s >> t;
    if(R[s][0] == R[t][0]) cout << "yes" << endl;
    else cout << "no" << endl;
  }


  return 0;
}