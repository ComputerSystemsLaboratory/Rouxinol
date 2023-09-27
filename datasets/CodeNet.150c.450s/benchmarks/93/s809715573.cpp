#include <iostream>
#include <cstdio>

struct Card
{
	char suit;
	int value;
};

void merge(Card A[], int left, int mid, int right);
void mergesort(Card A[], int left, int right);
int partition(Card A[], int p, int r);
void quicksort(Card A[], int p, int r);

int main()
{
	using namespace std;
	Card *A = new Card[100005];
	Card *B = new Card[100005];
	int n, val;
	cin >> n;
	char S[3];
	for (int i = 0; i < n; i++)
	{
		scanf("%s %d", S, &val);
		B[i].suit = A[i].suit = S[0];
		B[i].value = A[i].value = val;
	}
	mergesort(A, 0, n - 1);
	quicksort(B, 0, n - 1);
	bool stable = true;
	for (int i = 0; i < n; i++)
	{
		if (A[i].suit != B[i].suit)
		{
			stable = false;
			break;
		}
	}
	if (stable == true)
	{
		cout << "Stable\n";
	}
	else
	{
		cout << "Not stable\n";
	}

	for (int i = 0; i < n; i++)
	{
		printf("%c %d\n", B[i].suit, B[i].value);
		//printf("%c %d\n", A[i].suit, A[i].value);
	}

	delete[] A;
	delete[] B;
	return 0;
}

void merge(Card A[], int left, int mid, int right)
{
	int len1 = mid - left + 1;
	Card *L = new Card[len1];
	for (int i = 0; i < len1; i++)
	{
		L[i] = A[left + i];
	}
	int len2 = right - mid;
	Card *R = new Card[len2];
	for (int i = 0; i < len2; i++)
	{
		R[i] = A[mid + 1 + i];
	}

	int k = left, i = 0, j = 0;
	while (i < len1 && j < len2)
	{
		if (L[i].value <= R[j].value)
		{
			A[k++] = L[i++];
		}
		else
		{
			A[k++] = R[j++];
		}
	}
	while (i < len1)
	{
		A[k++] = L[i++];
	}
	while (j < len2)
	{
		A[k++] = R[j++];
	}

	delete[] L;
	delete[] R;
}


void mergesort(Card A[], int left, int right)
{
	if (left < right)
	{
		int mid = (left + right) / 2;
		mergesort(A, left, mid);
		mergesort(A, mid + 1, right);
		merge(A, left, mid, right);
	}
}

int partition(Card A[], int p, int r)
{
	int i = p - 1;
	for (int j = p; j < r; j++)
	{
		if (A[j].value <= A[r].value)
		{
			i++;
			Card temp = A[j];
			A[j] = A[i];
			A[i] = temp;
		}
	}
	Card temp = A[r];
	A[r] = A[i + 1];
	A[i + 1] = temp;
	return i + 1;
}

void quicksort(Card A[], int p, int r)
{
	if (p < r)
	{
		int q = partition(A, p, r);
		quicksort(A, p, q - 1);
		quicksort(A, q + 1, r);
	}
}
