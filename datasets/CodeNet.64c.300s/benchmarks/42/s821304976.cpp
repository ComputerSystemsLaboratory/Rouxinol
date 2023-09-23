#include <cstdio>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int n, m;
bool x[21][21];

int main(){
	while(scanf("%d", &n), n){
		rep(i, 21){
			fill_n(x[i], 21, false);
		}
		rep(i, n){
			int a, b;
			scanf("%d%d", &a, &b);
			x[a][b] = true;
		}
		scanf("%d", &m);
		int p = 10, q = 10;
		int ans = 0;
		if(x[p][q]){
			++ans;
			x[p][q] = false;
		}
		rep(i, m){
			char c;
			int d;
			scanf(" %c %d", &c, &d);
			int dx = 0, dy = 0;
			switch(c){
			case 'N':
				dy = 1;
				break;

			case 'E':
				dx = 1;
				break;

			case 'S':
				dy = -1;
				break;

			case 'W':
				dx = -1;
				break;
			}

			rep(j, d){
				p += dx;
				q += dy;
				if(x[p][q]){
					++ans;
					x[p][q] = false;
				}
			}
		}
		printf("%s\n", n == ans ? "Yes" : "No");
	}
	return 0;
}