#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

void BFS(vector<vector<int> >& V, vector<int>& time) {
	int i,k;
	int cnt=1;
	queue<pair<int,int> > qv;

	qv.push({1,0});
	time[1]=0;
	while(!qv.empty()) {
		k=qv.front().first;
		cnt=qv.front().second+1;
		qv.pop();
		for(i=0; i<(int)V[k].size(); ++i) {
			if(time[V[k][i]]==-1) {
				qv.push({V[k][i],cnt});
				time[V[k][i]]=cnt;
			}
		}
	}
}

int main() {
	int n,k,u;
	vector<vector<int> > V;
	vector<int> time;

	scanf("%d",&n);
	V.resize(n+1);
	time.resize(n+1);

	for(int i=1; i<=n; ++i) {
		scanf("%d%d",&u,&k);
		V[u].resize(k);
		time[u]=-1;
		for(int j=0; j<k; ++j) {
			scanf("%d",&V[u][j]);
		}
	}
	BFS(V,time);

	for(int i=1; i<=n; ++i) {
		printf("%d %d\n",i,time[i]);
	}
	return 0;
}