#include <cstdio>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

int main() {
	while(true) {
		int n; scanf("%d", &n);
		if(n==0) break;
		int submax; scanf("%d", &submax);
		int maxval = submax;
		for(int i = 1; i < n; i++) {
			int a; scanf("%d", &a);
			submax = max(a, submax+a);
			maxval = max(maxval, submax);
		}
		printf("%d\n", maxval);
	}
	return 0;
}