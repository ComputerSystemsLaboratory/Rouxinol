#include <queue>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	vector<vector<short>> dist(n, vector<short>(n));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%hd", &dist[i][j]);
			dist[i][j] = dist[i][j] < 0 ? 10000 : dist[i][j];
		}
	}
	
	vector<bool> visited(n, false);
	priority_queue<pair<short,int>, vector<pair<short,int>>, greater<pair<short,int>>> q;
	q.push(make_pair(0, 0));
	
	int ans = 0;
	while(q.size()){
		pair<short,int> edge = q.top();
		q.pop();
		if(visited[edge.second]) continue;
		ans += edge.first;
		visited[edge.second] = true;
		for(int i = 0; i < n; i++){
			if(!visited[i]){
				q.push(make_pair(dist[i][edge.second], i));
			}
		}
	}
	
	printf("%d\n", ans);
}