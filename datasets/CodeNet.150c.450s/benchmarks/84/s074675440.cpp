#include <iostream>
#include <cstdio>
#define MAXN 200000
#define INF 2000000000
typedef long long ll;
using namespace std;

int L[MAXN/2 + 2], R[MAXN / 2 + 2];

ll merge(int A[], int left, int mid, int right){
	ll cnt = 0;
	int n1 = mid - left;
	int n2 = right - mid;
	for (int i = 0; i < n1; i++) {
		L[i] = A[left + i];
	}
	for (int i = 0; i < n2; i++) {
		R[i] = A[mid + i];
	}
	L[n1] = R[n2] = INF;
	int i = 0, j = 0;
	for (int k = left; k < right; k++) {
		if (L[i] < R[j]) {
			A[k] = L[i++];
		}else {
			A[k] = R[j++];
			cnt += n1 - i;
		}
	}
	return cnt;
}

ll mergeSort(int A[], int left, int right)
{
	int mid;
	ll v1, v2, v3;
	if (left + 1 < right) {
		mid = (left + right)/2;
		v1 = mergeSort(A, left, mid);
		v2 = mergeSort(A, mid, right);
		v3 = merge(A, left, mid, right);
		return v1 + v2 + v3;
	}else {
		return 0;
	}
}

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int A[MAXN];
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	
	ll ans = mergeSort(A, 0, n);
	printf("%lld\n", ans);
	return 0;
}
