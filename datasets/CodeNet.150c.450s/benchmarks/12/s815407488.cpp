//#define LOCAL

#include <cstdio>

int parent(int i) { return i/2; }
int left(int i) { return i*2; }
int right(int i) { return i*2+1; }

int main()
{
	#ifdef LOCAL
		freopen("E:\\Temp\\input.txt", "r", stdin);
		freopen("E:\\Temp\\output.txt", "w", stdout);
	#endif

	int i, n, A[300];
	scanf("%d", &n);
	for(i=1; i<=n; ++i) scanf("%d", &A[i]);
	
	for(i=1; i<=n; ++i) {
		printf("node %d: key = %d, ", i, A[i]);
		if(parent(i) >= 1) printf("parent key = %d, ", A[i/2]);
		if(left(i) <= n) printf("left key = %d, ", A[i*2]);
		if(right(i) <= n) printf("right key = %d, ", A[i*2+1]);
		printf("\n");
	}

	return 0;
}