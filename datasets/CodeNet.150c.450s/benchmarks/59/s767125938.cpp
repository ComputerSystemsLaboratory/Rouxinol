#include <iostream>
#include <memory>

using namespace std;
void insertionSort(int *A, int N);
void printArray(int *A, int N);

int main()
{
	int n;
	cin >> n;
	unique_ptr<int[]> A(new int[n]);
	for(int i=0; i<n; i++){
		cin >> A[i];
	}
	printArray(A.get(), n);
	insertionSort(A.get(), n);
}

void insertionSort(int *A, int N)
{
	int temp = 0;
	int k = 0;
	for(auto j=1; j<N; j++){
		temp = A[j];
		k = j - 1;
		while(k>=0 && A[k]>temp){
			A[k+1] = A[k];
			k--;
			A[k+1] = temp;
		}
		printArray(A, N);

	}
}

void printArray(int *A, int N)
{
	for(int i=0; i<N; i++){
		cout << A[i];
		if(i==N-1) cout << endl;
		else cout << " ";
	}

}