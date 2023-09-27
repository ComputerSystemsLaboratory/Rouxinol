#include <cstdio>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int n, p;
int x[50];

int main(){
	while(scanf("%d%d", &n, &p), n){
		int c = 0;
		int q = p;
		while(1){
			if(q > 0){
				++x[c];
				--q;
				if(x[c] == p){
					printf("%d\n", c);
					break;
				}
			}
			else{
				q += x[c];
				x[c] = 0;
			}
			c = (c + 1) % n;
		}

		rep(i, n){
			x[i] = 0;
		}
	}
	return 0;
}