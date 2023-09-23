#include <cstdio>
#include <algorithm>
using namespace std;

struct E{ int a, b, c; };

int main(){
	int n;
	E edge[45];
	int fr, to, co;
	int d[10][10];
	int town;
	const int INF = 100000000;
	bool update;
	int res_town, res_cost, sub;
	
	while(true){
		scanf("%d", &n);
		
		if(n == 0) return 0;
		
		for(int i = 0; i < 10; i++){
			for(int j = 0; j < 10; j++){
				d[i][j] = INF;
			}
		}
		for(int i = 0; i < 10; i++) d[i][i] = 0;
		
		town = 0;
		for(int i = 0; i < n; i++){
			scanf("%d%d%d", &fr, &to, &co);
			town = max(town, max(fr, to));
			d[fr][to] = co; d[to][fr] = co;
			edge[i].a = fr; edge[i].b = to; edge[i].c = co;
		}
		
		res_town = 0; res_cost = INF * 10;
		for(int i = 0; i <= town; i++){
			sub = 0;
			
			//dijkstra
			update = true;
			while(update){
				update = false;
				for(int j = 0; j < n; j++){
					if(d[i][edge[j].a] + edge[j].c < d[i][edge[j].b]){
						update = true;
						d[i][edge[j].b] = d[i][edge[j].a] + edge[j].c;
					}
					if(d[i][edge[j].b] + edge[j].c < d[i][edge[j].a]){
						update = true;
						d[i][edge[j].a] = d[i][edge[j].b] + edge[j].c;
					}
				}
			}
			
			for(int j = 0; j <= town; j++) sub += d[i][j];
			
			if(sub < res_cost){
				res_town = i;
				res_cost = sub;
			}
		}
		
		printf("%d %d\n", res_town, res_cost);
	}
}