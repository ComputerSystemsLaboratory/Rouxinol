#include <algorithm>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <queue>
#include <string>
#include <set>
#include <vector>

#define FOR(i, l, r) for (i = (l); i < r; i++ )

using namespace std;
typedef long long ll;

#define MAX_N (100010)

int n;
int A[MAX_N];

// [p, r]
int partition(int A[], int p, int r) {
    int x = A[r];		// pivot
    int i = p - 1;
    int j;
    FOR(j, p, r) {
	if (A[j] <= x) {
	    i++;
	    swap(A[i], A[j]);
	}
    }
    swap(A[i+1], A[r]);

    return i + 1;
}

int main()
{
    int i;
    scanf("%d", &n);
    FOR(i, 0, n) scanf("%d", &A[i]);

    int ans = partition(A, 0, n-1);

    FOR(i, 0, n) {
	if (i == ans) printf("[");
	printf("%d", A[i]);
	if (i == ans) printf("]");
	printf("%c", (i == n-1) ? '\n' : ' ');
    }

    return 0;
}