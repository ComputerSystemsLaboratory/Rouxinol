#include <iostream>
using namespace std;

void insertionSort(int A[], int N);

int main(void)
{
	int N;
	int A[100];
	cin >> N;
	for(int i = 0; i < N; i++)
		cin >> A[i];

	for(int k = 0; k < N; k++)
		{
			if(k != N - 1)
				cout << A[k] << " ";
			else
				cout << A[k];
		}
		cout << "\n";

	insertionSort(A,N);

	
	return 0;
}

void insertionSort(int A[], int N)
{
	int v;




	for (int i = 1; i < N; i++)
	{
		v = A[i];
		int j = i - 1;

		

		while(j >= 0 && A[j] > v)
		{
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = v;

		for(int k = 0; k < N; k++)
		{
			if(k != N - 1)
				cout << A[k] << " ";
			else
				cout << A[k];
		}
		cout << "\n";
	}
}