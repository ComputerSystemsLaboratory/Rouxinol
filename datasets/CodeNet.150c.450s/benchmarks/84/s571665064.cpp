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

#define MAX_N (200010)
#define INF (0x7FFFFFFF)

int A[MAX_N];
int L[MAX_N>>1];
int R[MAX_N>>1];

ll merge(int A[], int l, int m, int r) {
    if ( r - l <= 1 ) return 0;
    int n1 = m - l;
    int n2 = r - m;
    
    for ( int i = 0; i < n1; i++ ) {
	L[i] = A[l+i];
    }

    for ( int i = 0; i < n2; i++ ) {
	R[i] = A[m+i];
    }

    L[n1] = INF;
    R[n2] = INF;

    int i_l = 0;
    int i_r = 0;
    ll ret = 0;

    for ( int k = l; k < r; k++ ) {
	if ( L[i_l] <= R[i_r] ) {
	    A[k] = L[i_l];
	    i_l++;
	}
	else {
	    A[k] = R[i_r];
	    i_r++;
	    ret += (n1 - i_l);
	}
    }

    return ret;
}

ll merge_sort(int A[], int l, int r) {
    ll ret = 0;
    if ( r - l > 1 ) {
	int m = ( r + l ) / 2;
	ret += merge_sort(A, l, m);
	ret += merge_sort(A, m, r);
	ret += merge(A, l, m, r);
    }

    return ret;
}

int main()
{
    int n;
    scanf("%d", &n);
    for ( int i = 0; i < n; i++ ) {
	scanf("%d", &A[i]);
    }
    
    ll ans = merge_sort(A, 0, n);
    printf("%lld\n", ans);
    
    return 0;
}