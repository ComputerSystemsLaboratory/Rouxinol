#include <cstdio>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef long long ll;

const int inf = 2e9;

int n, m;
int d[100][100];

int main(){
	scanf("%d%d", &n, &m);

	rep(i, n){
		fill_n(d[i], n, inf);
		d[i][i] = 0;
	}

	rep(i, m){
		int f, t, c;
		scanf("%d%d%d", &f, &t, &c);
		d[f][t] = c;
	}

	rep(k, n){
		rep(i, n){
			rep(j, n){
				if(d[i][k] != inf && d[k][j] != inf){
					d[i][j] = (int)min((ll)d[i][k] + d[k][j], (ll)d[i][j]);
				}
			}
		}
	}

	rep(i, n){
		if(d[i][i] < 0){
			puts("NEGATIVE CYCLE");
			return 0;
		}
	}
	
	rep(i, n){
		rep(j, n){
			if(j != 0){
				putchar(' ');
			}
			if(d[i][j] == inf){
				printf("INF");
			}
			else{
				printf("%d", d[i][j]);
			}
		}
		putchar('\n');
	}
	return 0;
}