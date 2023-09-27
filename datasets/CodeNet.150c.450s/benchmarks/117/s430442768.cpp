#include <iostream>

using namespace std;

int num_comp = 0;
const int MAX = 500000;
int L[MAX/2 + 2];
int R[MAX/2 + 2];
const int SENTINEL = 2000000000;


// Merge
void Merge(int A[], int left, int mid, int right)
{
	int n1 = mid - left;
	int n2 = right - mid;
	for (int i = 0; i < n1; i++)
		L[i] = A[left + i];
	for (int i = 0; i < n2; i++)
		R[i] = A[mid + i];
	L[n1] = SENTINEL;
	R[n2] = SENTINEL;

	int i = 0;
	int j = 0;
	for (int k = left; k < right; k++) {
		num_comp++;
		if (L[i] <= R[j]) {
			A[k] = L[i];
			i++;
		}
		else {
			A[k] = R[j];
			j++;
		}
	}
}

// Merge sort
void Mergesort(int A[], int left, int right)
{
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		Mergesort(A, left, mid);
		Mergesort(A, mid, right);
		Merge(A, left, mid, right);	
	}

}

// MAIN FUNCTION
int main(int argc, char** argv)
{
	// Input
	int A[MAX];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];

	// Merge sort
	Mergesort(A, 0, n);

	// Print all elements
	for (int i = 0; i < n; i++) {
		if (i)
			cout << " ";
		cout << A[i];
	}
	cout << endl;
	cout << num_comp << endl;

	return 0;
}