#include <iostream>
using namespace std;
struct Card{ char suit, value; };
void BubbleSort(struct Card A[], int N);
void SelectionSort(struct Card A[], int N);
void print(struct Card A[], int N);
bool isStable(struct Card A[], struct Card B[], int N);



int main(void)
{
	int N;
	Card A[100], B[100];

	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> A[i].suit >> A[i].value;
	}

	for(int i = 0; i < N; i++)
		B[i] = A[i];


	BubbleSort(A, N);
	SelectionSort(B, N);

	
	print(A, N);
	cout << "Stable" << endl;

	print(B,N);
	if(isStable(A, B, N))
		cout << "Stable" << endl;
	else
		cout << "Not stable" << endl;

	return 0;

}

void BubbleSort(struct Card A[], int N)
{
	for(int i = 0; i < N; i++)
	{
		for(int j = N - 1; j > i - 1; j--)
		{
			if(A[j].value < A[j - 1].value)
				swap(A[j], A[j - 1]);
		}
	}
}

void SelectionSort(struct Card A[], int N)
{
	for(int i = 0; i < N; i++)
	{
		int minj = i;
		for(int j = i; j < N; j++)
		{
			if(A[j].value < A[minj].value)
				minj = j;
		}
		swap(A[i], A[minj]);
	}
}

void print(struct Card A[], int N)
{
	for(int i = 0; i < N; i++)
	{
		if(i > 0)
			cout << " ";
		cout << A[i].suit << A[i].value;
	}
	cout << endl;
}

bool isStable(struct Card A[], struct Card B[], int N)
{
	for(int i = 0; i < N; i++)
		if(A[i].suit != B[i].suit || A[i].value != B[i].value)
			return false;
	return true;
}