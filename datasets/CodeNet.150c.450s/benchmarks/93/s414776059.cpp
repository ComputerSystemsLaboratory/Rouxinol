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

typedef pair<int, char> Card;
#define MAX_N (100010)

int n;
Card A[MAX_N];

#define INF (0x7FFFFFFF)

Card B[MAX_N];
Card L[(MAX_N >> 1)];
Card R[(MAX_N >> 1)];

// merges two arraies. Those are already sorted.
void merge(Card A[], int left, int mid, int right ) {
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

    L[n1].first = R[n2].first = INF;

    int i_l = 0;
    int i_r = 0;

    FOR( i, left, right ) {
	if ( L[i_l].first <= R[i_r].first ) {
	    A[i] = L[i_l];
	    i_l++;
	}
	else {
	    A[i] = R[i_r];
	    i_r++;
	}
    }

    return;
}

void merge_sort( Card A[], int left, int right ) {
    // proceeds when the number of element is greater than 1.
    if ( right - left > 1 ) {
	int mid = (right + left) >> 1;
	merge_sort( A, left, mid );
	merge_sort( A, mid, right );
	merge( A, left, mid, right );
    }
}


int partition(Card A[], int p, int r) {
    Card x = A[r];		// pivot
    int i = p - 1;
    int j;

    FOR(j, p, r) {
	if (A[j].first <= x.first) {
	    i++;
	    swap(A[i], A[j]);
	}
    }

    swap(A[i+1], A[r]);

    return i + 1;
}

void quick_sort(Card A[], int p, int r) {
    if ( p < r ) {
	int q = partition(A, p, r);
	quick_sort(A, p, q-1);
	quick_sort(A, q+1, r);
    }
}


int main()
{
    int i;
    scanf("%d", &n);
    FOR(i, 0, n) {
	scanf(" %c %d", &A[i].second, &A[i].first);
	B[i] = A[i];
    }
    
    merge_sort(B, 0, n);
    quick_sort(A, 0, n-1);

    bool is_stable = true;
    FOR(i, 0, n) {
	if ( A[i].first != B[i].first || A[i].second != B[i].second ) {
	    is_stable = false;
	    break;
	}
    }

    printf("%s\n", (is_stable) ? "Stable" : "Not stable");

    FOR(i, 0, n) {
	printf("%c %d\n", A[i].second, A[i].first);
    }

    return 0;
}