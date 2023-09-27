#include <bits/stdc++.h>
#define ll long long
#define INF 999999999
#define MOD 1000000007

using namespace std;

typedef pair<int,int>P;

const int MAX_N = 100;

vector<int> G[MAX_N];
int d[MAX_N];

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int id;
		cin >> id;
		int k;
		cin >> k;
		for(int j=0;j<k;j++){
			int to;
			cin >> to;
			G[id-1].push_back(to-1);
		}
	}
	fill(d,d+n,INF);
	deque<int> bfs;
	bfs.push_back(0);
	d[0] = 0;
	while(!bfs.empty()){
		int v = bfs.front();
		bfs.pop_front();
		for(int i=0;i<G[v].size();i++){
			int to = G[v][i];
			if(d[to] > d[v]+1){
				d[to] = d[v]+1;
				bfs.push_back(to);
			}
		}	
	}
	for(int i=0;i<n;i++){
		if(d[i] == INF){
			d[i] = -1;
		}
		cout << i+1 << " " << d[i] << "\n";
	}
}