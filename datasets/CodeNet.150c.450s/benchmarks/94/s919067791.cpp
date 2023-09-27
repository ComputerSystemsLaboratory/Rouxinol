#include <iostream>
using namespace std;

void bubbleSort(int A[], int N);
void trace(int A[], int N);

int main(void)
{
	int N;
	int A[100];

	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	bubbleSort(A, N);

	
}

void bubbleSort(int A[], int N)
{
	int count = 0;
	int flag = 1;
	int i = 1;
	while(flag)
	{
		flag = 0;
		for(int j = N - 1; j > i - 1; j--)
		{
			if(A[j] < A[j - 1])
			{
				int box = A[j];
				A[j] = A[j - 1];
				A[j - 1] = box;
				flag = 1;
				count++;
			}
		}
	}
	trace(A, N);
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