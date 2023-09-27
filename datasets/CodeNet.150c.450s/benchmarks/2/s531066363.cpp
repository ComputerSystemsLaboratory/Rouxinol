#include<iostream>
#include<algorithm>

using namespace std;

#define MAX 100001

int Partition(int A[], int p, int r) {
	int x, i;

	x = A[r];
	i = p - 1;

	for (int j = p; j <= r - 1; j++) {
		if (A[j] <= x) {
			i++;
			swap(A[i], A[j]);
		}
	}
	swap(A[i+1],A[r]);
	return i + 1;

}

int main() {

	int A[MAX], size, i, p;
	cin >> size;
	for (i = 0; i<size; i++) {
		cin >> A[i];
	}
	p = Partition( A, 0, size - 1);
	for (i = 0; i<size; i++) {
		if (i == p)cout << "[" << A[i] << "]";
		else cout << A[i];
		if (i != size - 1)cout << " ";
	}
	cout << endl;
	return 0;
}