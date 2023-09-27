#include <cstdio>
using namespace std;

int parent(int x) { return x / 2; }
int left(int x) { return x * 2; }
int right(int x) { return (x * 2) + 1; }

int A[600];

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		scanf("%d", &A[i]);

	for (int i = 1; i <= n; i++) {
		printf("node %d: ", i);
		printf("key = %d, ", A[i]);
		if (parent(i) >= 1) printf("parent key = %d, ", A[parent(i)]);
		if (left(i) <= n) printf("left key = %d, ", A[left(i)]);
		if (right(i) <= n) printf("right key = %d, ", A[right(i)]);
		printf("\n");
	}
	return 0;
}