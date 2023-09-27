#include <iostream>
#include <vector>
#include <queue>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;
using graph = vector<vector<int>>;

const int INF = 1001001001;

int main(){
	int n,m;
	cin >> n >> m;
	graph G(n);
	rep(i,m){
	int a,b;
    cin >> a >> b;
    a--,b--;
	G[a].push_back(b);
	G[b].push_back(a);
	}
	
	vector<int> dist(n,INF);
	queue<int> q;
  	vector<int> kari(n, -1);
	
	dist[0] = 0;
	q.push(0);
	
	while(!q.empty()){
		int e = q.front();
		q.pop();
		
		for(int f : G[e]){
			if(dist[f] != INF) continue;
			
			dist[f] = dist[e] + 1;
          	kari[f] = e;
			q.push(f);
		}
	}
  cout << "Yes" << endl;
	rep(i,n){
      	if(i == 0) continue;
      	int an = kari[i];
      	an++;
		cout << an << endl;
	}
}
