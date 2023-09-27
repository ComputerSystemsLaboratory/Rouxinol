#include <iostream>
using namespace std;
struct Card
{
	char suit;
	char value;
};

int N;
Card t,t1;
void print(struct Card A[], int N);
void bubble(struct Card A[], int N);
void selection(struct Card A[], int N);
bool isStable(struct Card A[], struct Card B[], int N);
int main()
{
	Card A[100], B[100];
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i].suit >> A[i].value;
	}
	for (int i = 0; i < N; i++)
		B[i] = A[i];
	bubble(A, N);
	selection(B, N);
	print(A, N);
	cout << "Stable" << endl;
	print(B, N);
	if (isStable(A, B, N))
	{
		cout << "Stable" << endl;
	}
	else
	{
		cout << "Not stable" << endl;
	}
	return 0;
}
void print(struct Card A[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << A[i].suit << A[i].value;
		if (i != N - 1)cout << " ";
	}
	cout << endl;
}
void bubble(struct Card A[], int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = N - 1; j > i;j--)
			if (A[j].value < A[j - 1].value)
			{
			//	char temp = 0;
				t = A[j];
				A[j] = A[j - 1];
				A[j - 1]= t;
			}
	}
}
void selection(struct Card B[], int N)
{
	
	for (int i = 0; i < N; i++)
	{
		int minj = i;
		for (int j = i; j < N; j++)
		{
			if (B[j].value < B[minj].value)
			{
				minj = j;
			}
			//char temp;
	
		}
		t1 = B[i];
		B[i] = B[minj];
		B[minj] = t1;

	}
	//print(B, N);
}
bool isStable(struct Card A[], struct Card B[],int N)
{
	for (int i = 0; i < N; i++)
	{
		if (A[i].suit != B[i].suit) return false;
	}
	return true;

}