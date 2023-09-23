#include <iostream>

using namespace std;

// Exchange
void exchange(int A[], int i, int j)
{
	int tmp = A[i];
	A[i] = A[j];
	A[j] = tmp;
}

// Partition
int partition(int A[], int l, int r)
{
	int threshold = A[r - 1];
	int i = l - 1;
	for (int j = l; j < r - 1; j++) {
		if (A[j] <= threshold) {
			i++;
			// Exchange
			exchange(A, i, j);
		}
	}
	i++;
	// Insert threshold
	exchange(A, i, r - 1);
	return i;
}

// MAIN FUNCTION
int main(int argc, char** argv)
{
	// Input
	int A[1000000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];

	// Partition
	int pivot = partition(A, 0, n);

	// Print all elements
	for (int i = 0; i < n; i++) {
		if (i)
			cout << " ";
		if (i == pivot) {
			cout << "[" << A[i] << "]";
		}
		else {
			cout << A[i];
		}
	}
	cout << endl;

	return 0;
}