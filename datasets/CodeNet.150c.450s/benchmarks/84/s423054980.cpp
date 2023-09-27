#include<iostream>
using namespace std;

#define max 200000
#define sentinel 2000000000
typedef long long llong;

int l[max / 2 + 2], r[max / 2 + 2];

llong merge(int a[], int n, int left, int mid, int right) {
	int i, j, k;
	llong cnt = 0;
	int n1 = mid - left;
	int n2 = right - mid;
	for (i = 0; i < n1; i++) l[i] = a[left + i];
	for (j = 0; j < n2; j++) r[j] = a[mid + j];
	l[n1] = r[n2] = sentinel;
	i = 0;
	j = 0;
	for (k = left; k < right; k++) {
		if (l[i] <= r[j]) {
			a[k] = l[i++]; 
		}
		else {
			a[k] = r[j++];
			cnt += n1 - i;
		}
	}
	return cnt;
}

llong mergesort(int a[], int n, int left, int right) {
	int mid;
	llong v1, v2, v3;
	if (left + 1 < right) {
		mid = (left + right) / 2;
		v1 = mergesort(a, n, left, mid);
		v2 = mergesort(a, n, mid, right);
		v3 = merge(a, n, left, mid, right);
		return v1 + v2 + v3;
	}
	else return 0;
}

int main()
{
	int a[max];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	llong ans = mergesort(a, n, 0, n);
	cout << ans << endl;

	return 0;
}
