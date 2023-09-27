#include<stdio.h>
#include<algorithm>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <iostream>
#include <time.h>
#include <functional>
using namespace std;

int n = 0;
int A[100001] = { 0 };
int L[100001] = { 0 };

int main(void) {
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &A[i]);
	}
	L[0] = A[0];
	int length = 1;
	for (int i = 1; i < n; ++i) {
		if (L[length - 1] < A[i]) {
			L[length++] = A[i];
		}
		else {
			int right = length - 1, left = 0;
			int cent = 0;
			while (left <= right) {
				cent = (left + right) / 2;
				if (L[cent] > A[i]) {
					if (cent == 0 || L[cent - 1] < A[i]) {
						L[cent] = A[i];
					}
				}
				if (L[cent] < A[i]) { left = cent + 1; }
				else { right = cent - 1; }
			}
		}
	}
	printf("%d\n", length);
}