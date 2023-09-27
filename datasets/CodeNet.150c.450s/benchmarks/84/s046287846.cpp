#include <iostream>
#include <algorithm>
#include <assert.h>
using namespace std;
#define int long long
int tempmarge[1000100];
int N, A[10000000];

int MargeSort(int x[], int left, int right) {
	int mid, i, j, k, cl, cr, c;
	if (left >= right)
		return 0;
	mid = (left + right) / 2;
	cl = MargeSort(x, left, mid);
	cr = MargeSort(x, mid + 1, right);

	for (i = left; i <= mid; i++)
		tempmarge[i] = x[i];
	for (i = mid + 1, j = right; i <= right; i++, j--)
		tempmarge[i] = x[j];
	i = left;
	j = right;
	c = 0;
	for (k = left; k <= right; k++)
		if (tempmarge[i] <= tempmarge[j])
			x[k] = tempmarge[i++];
		else {
			c += mid + 1 - i;
			x[k] = tempmarge[j--];
		}
		return c + cl + cr;
}

signed main() {

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	cout << MargeSort(A, 0, N - 1) << endl;
	return 0;
}