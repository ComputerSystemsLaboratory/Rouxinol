#include <iostream>

using namespace std;

// Function to trace the order of elements of array
void trace(int A[], int n)
{
	for (int i = 0; i < n; i++) {
		if (i > 0) cout << " ";
		cout << A[i];
	}
	cout << endl;
}

// Function to do bubble sort
void bubbleSort(int A[], int n)
{
	int numberOfSwap = 0;
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j >= i + 1; j--) {
			if (A[j] < A[j - 1]) {
				int tmp = A[j];
				A[j] = A[j - 1];
				A[j - 1] = tmp;
				numberOfSwap++;
			}
		}
	}
	trace(A, n);
	cout << numberOfSwap << endl;
}

//Function to do insertion sort
void insertionSort(int A[], int n)
{
	int numberOfSwap = 0;
	for (int i = 0; i < n; i++) {
		int min = i;
		for (int j = i; j < n; j++) {
			if (A[j] < A[min]) {
				min = j;
			}
		}
		if (i != min) {
			int tmp = A[i];
			A[i] = A[min];
			A[min] = tmp;
			numberOfSwap++;
		}
	}

	// Print the result
	trace(A, n);
	cout << numberOfSwap << endl;
}

// MAIN FUCNTION
int main()
{
	int n;
	int A[100];
	int key;

	// Input data
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	insertionSort(A, n);

	return 0;
}