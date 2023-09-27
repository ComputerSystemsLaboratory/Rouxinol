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
#define N 20000

int p[N];
int d[N];

void init(void){
	f(i, N){
		p[i] = i;
		d[i] = 1;
	}
	return;
}

int pa(int x){
	if (p[x] == x)return x;
	else return p[x] = pa(p[x]);
}


void uni(int x, int y){
	int px = pa(x);
	int py = pa(y);
	if (d[px] < d[py]){
		p[px] = py;
		d[py] = max(d[py], d[px] + 1);
	}
	else{
		p[py] = px;
		d[px] = max(d[px], d[py] + 1);
	}
}

bool jud(int x, int y){
	int px = pa(x);
	int py = pa(y);
	if (px == py)return true;
	else return false;
}


int main(){
	int n, q;
	int x, y, z;
	long long s, ans;
	bool v = true;
	ans = 0;
	scanf("%d", &n);
	init();
	scanf("%d", &q);
	f(qq, q){
		scanf("%d", &z);
		if (z == 0){
			scanf("%d %d", &x,&y);
			uni(x, y);
		}
		else if (z == 1){
			scanf("%d %d", &x, &y);
			v=jud(x, y);
			if (v)printf("1\n");
			else printf("0\n");
		}
	}

	return 0;
}
