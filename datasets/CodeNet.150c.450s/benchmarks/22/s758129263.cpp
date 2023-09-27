#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<functional>
#include<vector>
#include<queue>
#include<stack>
#include<set>
using namespace std;
#define MOD 1000000007
#define f(i,n) for(int i=0;i<int(n);i++)
#define N (2000)
#define INF (922337203685477580)

struct edge{
	int to;
	long long dis;
};

int n, m;
vector<edge>e[N];
long long d[N];
bool used[N];
bool zz;

void init(void){
	memset(used, 0, sizeof(used));
	return;
}

void bellmanford(int x){
	f(i, N)d[i] = INF;
	zz = true;
	d[x] = 0;
	f(ii, n - 1){
		f(i, n){
			f(j, e[i].size()){
				if (d[e[i][j].to] > d[i] + e[i][j].dis)d[e[i][j].to] = d[i] + e[i][j].dis;
			}
		}
	}
	f(i, n){
		f(j, e[i].size()){
			if (d[e[i][j].to] > d[i] + e[i][j].dis){
              if(d[i]<(INF/10))zz = false;
            }
		}
	}
}


int main(void){
	int k;
	int x, y;
long long z;
	long long s, ans;
	scanf("%d %d %d", &n, &m,&k);
	init();
	f(i, m){
		scanf("%d %d %lld", &x, &y, &z);
		e[x].push_back({ y, z });
	}
	bellmanford(k);


	if (zz){
		f(i, n){
			if(d[i]<(INF/10))printf("%lld\n", d[i]);
			else printf("INF\n");
		}
	}
	else printf("NEGATIVE CYCLE\n");

	return 0;
}

