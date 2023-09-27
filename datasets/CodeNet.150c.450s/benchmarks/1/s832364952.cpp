#include <cstdio>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

const int inf = 2e9;

int n;
int dp[100000];

int main(){
	scanf("%d", &n);
	fill_n(dp, n, inf);
	rep(i, n){
		int a;
		scanf("%d", &a);
		*lower_bound(dp, dp + n, a) = a;
	}
	for(int i = n - 1; i >= 0; --i){
		if(dp[i] != inf){
			printf("%d\n", i + 1);
			break;
		}
	}
	return 0;
}