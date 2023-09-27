#include <cstdio>
#include <numeric>
using namespace std;

int main(){
	int n, q, c, x, y;
	scanf("%d %d", &n, &q);
	int A[100000] = {};
	while (q--){
		scanf("%d %d %d", &c, &x, &y);
		if (c) printf("%d\n", accumulate(A + x, A + y + 1, 0));
		else A[x] += y;
	}
	return 0;
}