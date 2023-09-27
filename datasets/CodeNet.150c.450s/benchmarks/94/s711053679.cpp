#include <iostream>

using namespace std;

// Function to trace intermediate result
void trace(int A[], int n)
{
	for (int i = 0; i < n; i++) {
		if (i > 0) cout << " ";
		cout << A[i];
	}
	cout << endl;
}

void bubbleSort(int A[], int n)
{
	int counter = 0;
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j >= i + 1; j--) {
			if (A[j] < A[j - 1]) {
				int tmp = A[j];
				A[j] = A[j - 1];
				A[j - 1] = tmp;
				counter++;
			}
		}
	}

	trace(A, n);
	cout << counter << endl;
}

int main()
{
	int A[100];
	int n;
	int key;
	int j;
	// Input data 
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];

	bubbleSort(A, n);

	return 0;
}