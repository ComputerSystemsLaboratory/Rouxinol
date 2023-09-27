//ues the stable sort-mergesort to chek quick-sort

#include<iostream>
#include<limits.h>
using namespace std;

const int MAX = 100000;

const int STN = INT_MAX;

struct Card {
	char suit;
	int num;
};
Card L[MAX / 2 + 2]; Card R[MAX / 2 + 2];
void merge(Card *A, int left, int mid, int right)
{

	int n1 = mid - left;
	int n2 = right - mid;
	for (int i = 0; i < n1; i++)L[i] = A[left + i];
	for (int i = 0; i < n2; i++)R[i] = A[mid + i];
	L[n1].num = R[n2].num = STN;
	int k, j;
	k = j = 0;
	for (int i = left; i < right; i++)
	{
		if (L[k].num<=R[j].num)
			A[i] = L[k++];
		else
			A[i] = R[j++];
	}
}

void mergeSort(Card *A, int left, int right)
{
	int mid = (left + right) / 2;
	if (left + 1<right)
	{
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}


int partition(Card *A, int left, int right) //[left,right];
{
	int x = A[right].num;
	int i = left-1;

	for (int j = left; j<right; j++)
	{
		if (A[j].num<=x)
		{
		i++;
		Card t = A[i]; A[i] = A[j]; A[j] = t; 
		}
	}
	Card t = A[i + 1]; A[i + 1] = A[right]; A[right] = t;
	return i + 1;
}

void quickSort(Card *A, int left, int right)
{
	if (left<right)
	{
		int p = partition(A, left, right);
		quickSort(A, left, p - 1);
		quickSort(A, p + 1, right);
	}
}

bool isStable(Card *A, Card *B, int n)
{
	for (int i = 0; i < n; i++)
		if (A[i].suit != B[i].suit)
			return false;
	return true;
}

Card smp[MAX];
Card smp1[MAX];
int main()
{
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> smp[i].suit >> smp[i].num;
		smp1[i] = smp[i];
	}
	mergeSort(smp, 0, n);
	quickSort(smp1, 0, n-1);
	if (isStable(smp, smp1, n))
		cout << "Stable" << endl;
	else
		cout << "Not stable" << endl;

	for (int i = 0; i<n; i++)
	{
		//cout << smp[i].suit << " " << smp[i].num << endl;
		cout << smp1[i].suit << " " << smp1[i].num << endl;
	}


}