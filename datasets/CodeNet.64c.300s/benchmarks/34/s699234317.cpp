#include <iostream>

using namespace std;

void insertionSort(int A[], int N);

int main()
{
	int N;
	cin >> N;
	int A[1000];
	
	for (int i = 0; i < N; i++) cin >> A[i];

	insertionSort(A, N);

	return 0;
}

void insertionSort(int A[], int N)
{
	for (int i = 0; i < N; i++){
		int v = A[i];
		int j = i - 1;

		while (j >= 0 && A[j] > v){
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = v;
		
		cout << A[0];
		for (j = 1; j < N; j++) cout << " " << A[j];
		cout << endl;
	}
}