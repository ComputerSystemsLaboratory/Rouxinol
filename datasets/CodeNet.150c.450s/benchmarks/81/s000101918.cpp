#include <bits/stdc++.h>
using namespace std;

const int maxn = 45 + 15;
const int INF = 1e7;
int n, dis[maxn][maxn], cns;
map<int, int> cache;
vector<int> Find;
void init(){
	cache.clear(), Find.clear(), cns = 0;
	Find.push_back(0);
	for(int i = 1; i < maxn; i++)
	for(int j = 1; j < maxn; j++){
		if(i == j) dis[i][j] = 0;
		else dis[i][j] = dis[j][i] = INF;
	}
}
int ID(int x){
	if(cache.count(x)) return cache[x];
	Find.push_back(x);
	return cache[x] = ++cns;
} 
void floyd_warshall(){
	for(int k = 1; k <= cns; k++)
	for(int i = 1; i <= cns; i++)
	for(int j=1;j<=cns;j++) dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
}

int main(){
	while(scanf("%d", &n) == 1&& n){
		init();
		int ori, fin, val;
		while(n--){
			scanf("%d %d %d", &ori, &fin, &val);
			int xx = ID(ori), yy = ID(fin);
			dis[xx][yy] = dis[yy][xx] = val;
		}
		floyd_warshall();
		int ans = INF, index = -1;
		for(int i = 1; i <= cns; i++){
			int tem = 0;
			for(int j=1;j<=cns;j++) tem+=dis[i][j];
			if(tem < ans) ans = tem, index = i;
		} 
		printf("%d %d\n", Find[index], ans);
	}
	return 0;
}