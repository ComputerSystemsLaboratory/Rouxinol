
#include <cstdio>

#define M 2000010
int A[M], B[M], C[M];

int main()
{
	#ifdef LOCAL
		freopen("E:\\Temp\\input.txt", "r", stdin);
		freopen("E:\\Temp\\output.txt", "w", stdout);
	#endif

	int i, n;
	scanf("%d", &n);
	for(i=0; i<n; ++i) {
		scanf("%d", &A[i]);
		++B[A[i]];
	}
	for(i=0; i<M; ++i) {
		if(B[i]) {
			printf("%d", i);
			--B[i]; break;
		}
	}
	for(i=0; i<M; ++i) {
		if(B[i]) 
			while(B[i]--) printf(" %d", i);
	}
	printf("\n");

	return 0;
}