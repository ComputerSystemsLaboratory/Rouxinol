#include<iostream>
#include<algorithm>

const int MAX_V = 10, INF = 1 << 24;
int V;
int d[MAX_V], used[MAX_V], cost[MAX_V][MAX_V];

void dijkstra(int s){
	std::fill(d, d+MAX_V, INF);
	std::fill(used, used+MAX_V, 0);

	d[s] = 0;

	while(true){
		int v = -1;
		for(int u=0;u<V;u++){
			if(!used[u] && (v == -1 || d[u] < d[v])){
				v = u;
			}
		}

		if(v == -1){
			break;
		}

		used[v] = 1;
		for(int u=0;u<V;u++){
			d[u] = std::min(d[u], d[v] + cost[v][u]);
		}
	}
}

int getCost(int s){
	dijkstra(s);
	int res = 0;
	for(int i=0;i<V;i++){
		if(i != s){
			res += d[i];
		}
	}

	return res;
}

int main(){
	int n = 0;
	while(std::cin >> n, n){
		for(int i=0;i<MAX_V;i++){
			std::fill(cost[i], cost[i]+MAX_V, INF);
		}
		V = 0;

		for(int i=0;i<n;i++){
			int a, b, c;
			std::cin >> a >> b >> c;
			cost[a][b] = c;
			cost[b][a] = c;
			V = std::max(V, std::max(a+1, b+1));
		}

		int res = INF, town = 0;
		for(int i=V-1;i>=0;i--){
			int v = getCost(i);
			if(v <= res){
				res = v;
				town = i;
			}
		}
		std::cout << town << " " << res << std::endl;
	}
}