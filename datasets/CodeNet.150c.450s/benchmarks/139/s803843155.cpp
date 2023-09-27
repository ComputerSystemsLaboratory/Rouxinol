#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <iomanip>
#include <map>
#include <queue>

using namespace std;

#define fori(x) for (int i = 0; i < x; ++i)
#define forj(x) for (int j = 0; j < x; ++j)

typedef long long ll;

const int INF = 2e9 + 5;
const int alength=100100;

int main(){
	int n,m;
	cin>>n>>m;
	vector<int>way[alength];
	fori(m){
		int a,b;cin>>a>>b;
		way[a-1].push_back(b-1);
		way[b-1].push_back(a-1);
	}

	queue<int>q;
	vector<int>dist(n,INF);
	vector<int>pre(n,-1);
	dist[0]=0;
	q.push(0);
	while(!q.empty()){
		int v=q.front();q.pop();
		for(int u:way[v]){
			if(dist[u]!=INF){
				continue;
			}
			dist[u]=dist[v]+1;
			pre[u]=v;
			q.push(u);
		}
	}
	cout << "Yes\n";
	fori(n-1){
		int ans=pre[i+1];
		cout << ans+1 << endl;
	}
}
