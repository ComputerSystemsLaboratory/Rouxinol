#pragma warning (disable :4996)
#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
const int N = 2e6 + 10;
int A[N], L[N], R[N];
ll ans;
ll merge(int A[], int le, int mid, int r) {
	ll cnt = 0;
	int n1 = mid - le, n2 = r - mid;
	for (int i = 0; i < n1; i++) L[i] = A[le + i];
	for (int i = 0; i < n2; i++) R[i] = A[mid + i];
	L[n1] = R[n2] = 2e9;
	int i = 0, j = 0;
	int ans = 0;
	for (int k = le; k < r; k++) {
		if (L[i] <= R[j]) { A[k] = L[i++]; }
		else { 
			A[k] = R[j++];
			cnt += n1 - i;
		}
	}
	return cnt;
}
ll mergesort(int A[], int le, int r) {
	if (le + 1 < r) {
		ll v1 = 0, v2 = 0, v3 = 0;
		int mid = (le + r) / 2;
		v1 = mergesort(A, le, mid);
		v2 = mergesort(A, mid, r);
		v3 = merge(A, le, mid, r);
		return v1 + v2 + v3;
	}
	return 0;
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &A[i]);
	ans=mergesort(A, 0, n);
	cout << ans << endl;
	return 0;
}
