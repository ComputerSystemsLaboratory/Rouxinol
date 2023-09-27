#define scanf_s scanf
#include <string>
#include <stdio.h>
#include <math.h>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

#define MAX 500000
//#define MAX_ 1000
static int H;
void maxHeapify(long long int A[], int i)
{
	int l = i * 2, r = i * 2 + 1, largest;
	long long int x;
	if (l <= H && A[l] > A[i])
		largest = l;
	else
		largest = i;
	if (r <= H && A[r] > A[largest])
		largest = r;
	if (largest != i) {
		x = A[i]; A[i] = A[largest]; A[largest] = x;
		maxHeapify(A, largest);
	}
}
void buildMaxHeap(long long int A[]) {
	for (int i = H / 2; i >= 1; --i) {
		maxHeapify(A, i);
	}
}

int main(void)
{
	long long int Heaps[MAX + 1];
	scanf_s("%d", &H);
	for (int i = 1; i <= H; ++i) {
		scanf_s("%lld", &Heaps[i]);
	}
	buildMaxHeap(Heaps);
	for (int i = 1; i <= H; ++i) {
		printf(" %lld", Heaps[i]);
	}
	printf("\n");
}