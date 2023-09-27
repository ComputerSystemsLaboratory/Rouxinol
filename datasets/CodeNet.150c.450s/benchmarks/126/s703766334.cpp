#include <cstdio>
#include <queue>
#include <map>
using namespace std;
typedef pair<int, int> P;

int a,b,n;
int point[20][20];
bool busy[20][20];
bool used[20][20];

int main(){
	while(scanf("%d%d", &a, &b)){
		if(a == 0 && b == 0) break;
		for(int i = 0; i < 20; i++) for(int j = 0; j < 20; j++){
			point[i][j] = 0;
			busy[i][j] = 0;
			used[i][j] = 0;
		}
		scanf("%d", &n);
		point[1][1] = 1;
		for(int i = 0; i < n; i++){
			int x, y;
			scanf("%d%d", &x, &y);
			busy[y][x] = true;
		}
		if(busy[1][1]){
			printf("0\n");
			return 0;
		}
		queue<P> que;
		que.push(P(1,1));
		while(!que.empty()){
			P p = que.front(); que.pop();
			int pf = p.first, ps = p.second;
			if(pf < b && busy[pf+1][ps] == false){
				point[pf+1][ps] += point[pf][ps];
				if(!used[pf+1][ps]) que.push(P(pf+1,ps));
				used[pf+1][ps] = true;
			}
			if(ps < a && busy[pf][ps+1] == false){
				point[pf][ps+1] += point[pf][ps];
				if(!used[pf][ps+1]) que.push(P(pf,ps+1));
				used[pf][ps+1] = true;
			}
		}
		printf("%d\n", point[b][a]);
	}
}