#include <iostream>
using namespace std;

static const int MAX = 100;

void trace(int A[], int N)
{
	for(int i = 0; i < N; i++) {
		cout << A[i];
		if(i < N-1) cout << " ";
	}
	cout << endl;
}

void insertionSort(int A[], int N)
{
    int v, j;
	
	for(int i = 1; i < N; i++) {
		v = A[i];
		j = i - 1;
		while(j >= 0 && A[j] > v) {
			A[j+1] = A[j];
			--j;
		}
		A[j+1] = v;
		trace(A, N);
	}
}

int main()
{
	int A[MAX], N;
	
	cin >> N;
	
	for (int i = 0; i < N; i++) cin >> A[i];
	
	trace(A, N);
	insertionSort(A, N);
	
	return 0;
}