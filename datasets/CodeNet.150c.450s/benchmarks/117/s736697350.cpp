#define scanf_s scanf
//#include <string>
#include <stdio.h>
//#include <math.h>
//#include <stack>
//#include <queue>
//#include <list>
#include <vector>
#include <iostream>
using namespace std;
#define MAX 10000000000
int cou = 0;
void merge(int A[], int left, int mid, int right)
{
	int i = 0, j = 0;
	int n1 = mid - left;
	int n2 = right - mid;
	vector<int> L, R;
	for (i = 0; i < n1; i++) { L.push_back(A[left + i]); }
	for (i = 0; i < n2; i++) { R.push_back(A[mid + i]); }
	L.push_back(MAX); R.push_back(MAX);
	i = 0;
	j = 0;
	for (int k = left; k < right; k++) {
		if (L.at(i) <= R.at(j)) {
			A[k] = L.at(i); i++;
		}
		else {
			A[k] = R.at(j); j++; 
		}
		cou++;
	}
}
void mergeSort(int A[], int left, int right)
{
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}
int main(void)
{
	int n, S[500000];
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) { scanf_s("%d", &S[i]); }
	mergeSort(S, 0, n);
	for (int i = 0; i < n; i++) { 
		if (i != 0) { printf(" "); }
		printf("%d", S[i]);
	}
	printf("\n%d\n", cou);
}