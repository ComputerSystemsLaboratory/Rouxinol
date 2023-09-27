#include <bits/stdc++.h>  
 
using namespace std;
 
#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define repr(i, j) for(int i = j; i >= 0; --i)
#define INF (1 << 30)
#define MOD 1e9 + 7
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<string, int> P;

void call(int n) {
	int i = 1;
	bool flag = 0;
	while(i <= n) {
		int x = i;
		if(x % 3 == 0) printf(" %d", i);
		else {
			while(1) {
				if(x % 10 == 3) {
					printf(" %d", i);
					break;
				}
				x /= 10;
				if(x) continue;
				else break;
			}
		}
		++i;
	}
	printf("\n");
	return;
}

int main() {
	int N;
	scanf("%d", &N);
	call(N);
	return 0;
}