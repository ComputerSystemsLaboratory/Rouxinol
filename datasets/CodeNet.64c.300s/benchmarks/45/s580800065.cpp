#include <cstdio>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int n, m, p;
int x[100];

int main(){
	while(scanf("%d%d%d", &n, &m, &p), n){
		--m;
		rep(i, n){
			scanf("%d", &x[i]);
		}
		if(!x[m]){
			puts("0");
			continue;
		}
		int s = 0;
		rep(i, n){
			s += x[i];
		}
		printf("%d\n", s * (100 - p) / x[m]);
	}
	return 0;
}