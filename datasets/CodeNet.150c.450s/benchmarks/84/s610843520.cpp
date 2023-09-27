
#include <iostream>
#include <algorithm>
#include <assert.h>

using namespace std;

int tempmarge[1000100];

int N, A[10000000];

bool bsearch(const int array[], int left, int right, int value) {
	while (left + 1 < right) {
		int med = (left + right) / 2;
		if (array[med] > value)right = med;
		else left = med;
	}
	return left < right  && array[left] == value;
}

long long int MargeSort(int x[], int left, int right) {
	long long int mid, i, j, k, cl, cr, c;

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

int main() {
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> A[i];

	cout << MargeSort(A, 0, N - 1) << endl;

	return 0;
}