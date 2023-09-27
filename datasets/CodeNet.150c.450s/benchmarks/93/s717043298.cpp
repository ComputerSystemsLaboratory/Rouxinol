#include<iostream>
#include<cstdio>

using namespace std;
struct Card
{
	char suit;
	int value;
};

Card A[100000], B[100000];
int N;

int partition(Card A[], int p, int r)
{
	int i = p - 1;
	int x = A[r-1].value;
	for (p; p < r; p++)
	{
		if (A[p].value <= x)
		{
			swap(A[++i], A[p]);
		}
	}
	return i;
}

void quicksort(Card A[], int left, int right)
{
	if (right - left > 1)
	{
		int mid = partition(A, left, right);
		quicksort(A, left, mid);
		quicksort(A, mid + 1, right);

	}
}

int isstable(Card A[], Card B[], int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (B[j].value == A[i].value)
			{
				if (B[j].suit != A[i].suit)
					return 1;
				else
					B[j].value = -1;
				break;
			}
		}
	}
	return 0;
}

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i].suit >> A[i].value;
	}
	for (int i = 0; i < N; i++)
	{
		B[i] = A[i];
	}
	quicksort(A, 0, N);

	if (isstable(A, B, N))
	{
		cout << "Not stable" << endl;
	}
	else
	{
		cout << "Stable" << endl;
	}

	for (int i = 0; i < N; i++)
	{
		cout << A[i].suit << ' ' << A[i].value << endl;
	}
	
	return 0;
}
