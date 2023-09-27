#include <cstdio>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

const int inf = 1e7;

struct E{
	E(){}
	E(int f, int t, int c): f(f), t(t), c(c){}

	int f, t, c;
};

int n, m, r;
E g[2000];
int d[1000];

int main(){
	scanf("%d%d%d", &n, &m, &r);
	rep(i, m){
		int f, t, c;
		scanf("%d%d%d", &f, &t, &c);
		g[i] = E(f, t, c);
	}

	fill_n(d, n, inf);

	d[r] = 0;
	rep(a, n){
		bool update = false;
		rep(i, m){
			E e = g[i];
			if(d[e.f] != inf && d[e.t] > d[e.f] + e.c){
				d[e.t] = d[e.f] + e.c;
				update = true;
			}
		}
		if(!update){
			break;
		}
		if(a == n - 1){
			puts("NEGATIVE CYCLE");
			return 0;
		}
	}

	rep(i, n){
		if(d[i] == inf){
			puts("INF");
		}
		else{
			printf("%d\n", d[i]);
		}
	}
	return 0;
}