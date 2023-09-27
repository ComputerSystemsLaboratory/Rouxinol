//#define LOCAL

#include <cstdio>

#define M 500010
#define SENTINEL 2000000000
int s = 0, A[M], L[M], R[M];

void merge(int l, int m, int r) {
	int i, j, k, n1 = m-l, n2 = r-m;
	L[n1] = R[n2] = SENTINEL;
	for(i=0; i<n1; ++i) L[i] = A[l+i];
	for(i=0; i<n2; ++i) R[i] = A[m+i];
	i = j = 0;
	for(k=l; k<r; ++k) {
		if(L[i] <= R[j]) A[k] = L[i++];
		else A[k] = R[j++]; ++s;
	}
}

void mergeSort(int l, int r) {
	if(l+1 < r) {
		int m = (l+r)/2;
		mergeSort(l, m);
		mergeSort(m, r);
		merge(l, m, r);
	}
}

int main()
{
	#ifdef LOCAL
		freopen("E:\\Temp\\input.txt", "r", stdin);
		freopen("E:\\Temp\\output.txt", "w", stdout);
	#endif

	int i, n;
	scanf("%d", &n);
	for(i=0; i<n; ++i) scanf("%d", &A[i]);

	mergeSort(0, n);
	for(i=0; i<n; ++i) {
		if(i) printf(" ");
		printf("%d", A[i]);
	}
	printf("\n%d\n", s);

	return 0;
}