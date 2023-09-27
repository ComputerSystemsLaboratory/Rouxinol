#include <algorithm>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <queue>
#include <string>
#include <set>
#include <vector>

#define FOR(i, l, r) for (i = (l); i < (r); i++)
#define INF (0x7FFFFFFF)
using namespace std;
typedef long long ll;

#define MAX_N (500010)
int A[MAX_N];
int L[(MAX_N>>1)];
int R[(MAX_N>>1)];
int n;
int calc = 0;

void merge(int A[], int left, int mid, int right ) {
    // returns when the number of element is 1 or less.
    if ( right - left <= 1 ) return;
    int i;
    int n1 = mid - left;
    int n2 = right - mid;
    int n = right - left;

    FOR( i, 0, n1 ) {
	L[i] = A[left + i];
    }

    FOR( i, 0, n2 ) {
	R[i] = A[mid + i];
    }

    L[n1] = R[n2] = INF;

    int i_l = 0;
    int i_r = 0;

    FOR( i, left, right ) {
	if ( L[i_l] <= R[i_r] ) {
	    A[i] = L[i_l];
	    i_l++;
	}
	else {
	    A[i] = R[i_r];
	    i_r++;
	}
	calc++;
    }

    return;
}

void mergeSort( int A[], int left, int right ) {
    // proceeds when the number of element is greater than 1.
    if ( right - left > 1 ) {
	int mid = (right + left) >> 1;
	mergeSort( A, left, mid );
	mergeSort( A, mid, right );
	merge( A, left, mid, right );
    }
}

int main()
{
    int i;
    scanf("%d", &n);
    FOR(i, 0, n) scanf("%d", &A[i]);
    
    mergeSort( A, 0, n );

    FOR(i, 0, n) {
	printf("%d%c", A[i], (i == n-1) ? '\n' : ' ');
    }

    printf("%d\n", calc);

    return 0;
}