#define scanf_s scanf
#include <string>
#include <stdio.h>
#include <math.h>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <iostream>
using namespace std;

#define MAX 100000
//#define MAX_ 1000

int n;
int partition(int A[], int p,int r)
{
	int x = A[r], work;
	int i, j;
	i = p - 1;
	for (j = p; j <= r - 1; j++) {
		if (A[j] <= x) {
			i = i + 1;
			work = A[i]; A[i] = A[j]; A[j] = work;
		}
	}
	work = A[i + 1]; A[i + 1] = A[r]; A[r] = work;
	return i + 1;
}
int main(void)
{
	int S[MAX], a, cou = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &S[i]);
	}
	a = partition(S, 0, n - 1);
	for (int i = 0; i < n; i++) {
		if (i != 0) printf(" ");
		if (a == i) {
			printf("[%d]", S[i]);
		}
		else printf("%d", S[i]);
	}
	printf("\n");
}