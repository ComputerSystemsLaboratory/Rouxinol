#include<iostream>
#include"stdio.h"
#define MAX 500000
#define N 1000000000
using namespace std;

int arr[MAX];
int L[MAX / 2 + 2], R[MAX / 2 + 2];
int c = 0;

void merge(int a[], int left,int middle, int right)
{
	int n1 = middle - left;
	int n2 = right - middle;
	for (int i = 0; i < n1; i++)L[i] = a[left+i];
	L[n1] = N;
	for (int i = 0; i < n2; i++)R[i] = a[middle+i];
	R[n2] = N;
	int l = 0;
	int r = 0;
	for (int i = left; i < right; i++)
	{
		c++;
		if (L[l] > R[r])
		{
			a[i] = R[r];
			r++;
		}
		else
		{
			a[i] = L[l];
			l++;
		}
	}
}
void mergesort(int a[],int left,int right)
{
	if (left + 1 < right)
	{
		int middle = (left + right) / 2;
		mergesort(a, left, middle);
		mergesort(a, middle, right);
		merge(a, left, middle, right);
	}

}


int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)scanf("%d", &arr[i]);
	mergesort(arr, 0, n);
	for (int i = 0; i < n-1; i++)printf("%d ", arr[i]);
	printf("%d\n", arr[n-1]);
	printf("%d\n", c);
	return 0;
}