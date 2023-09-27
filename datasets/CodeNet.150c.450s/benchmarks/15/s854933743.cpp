#include <iostream>
#include <cstdio>
using namespace std;

#define SIZE 10000


bool linerSearch(int A[], int x, int n) 
{
	A[n] = x;
	int i = -1;
	while (A[++i] != A[n]) {}
	return (i != n);
}

int main()
{
	int n, q, result = 0;
	int A[SIZE + 1], T;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &A[i]);

	scanf("%d", &q);
	for (int i = 0; i < q; i++) {
		scanf("%d", &T);
		if (linerSearch(A, T, n)) result++;
	}
	printf("%d\n", result);
	return 0;
}