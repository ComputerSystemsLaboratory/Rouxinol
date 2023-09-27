#include <iostream>
using namespace std;

void selectionSort(int A[], int N);
void trace(int A[], int N);

int main(void)
{
	int N;
	int A[100];
	cin >> N;
	for(int i = 0; i < N; i++)
		cin >> A[i];

	selectionSort(A,N);

	return 0;
}

void selectionSort(int A[], int N)
{
	int count = 0;
	for(int i = 0; i < N - 1; i++)
	{
		int minj = i;
		for(int j = i; j < N; j++)
		{
			if(A[j] < A[minj])
			{
				minj = j;
			}
		}
		swap(A[i], A[minj]);
		if(i != minj)
			count++;
	}
	trace(A,N);
	cout << count << endl;
}

void trace(int A[], int N)
{
	for(int i = 0; i < N; i++)
	{
		if(i > 0)
			cout << " ";
		cout << A[i];
	}
	cout << "\n";
}