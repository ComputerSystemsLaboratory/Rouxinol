#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int n, k;
int ary[100000];

int main() {
	while(1) {
		scanf(" %d %d", &n, &k);
		if(n == 0 && k == 0) break;
		memset(ary, 0, sizeof ary);
		rep(i,n) {
			static int t;
			scanf(" %d", &t);
			ary[i] = t;
		}

		int sum = 0;
		for(int i = 0; i < k; i++) sum += ary[i];

		int maxv = sum;
		for(int i = 1; i < n - k + 1; i++) {
			sum -= ary[i - 1];
			sum += ary[i + k - 1];
			maxv = max<int>(maxv, sum);
		}
		printf("%d\n", maxv);
	}
	return 0;
}