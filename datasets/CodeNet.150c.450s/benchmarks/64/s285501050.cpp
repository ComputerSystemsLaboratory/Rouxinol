#define scanf_s scanf

#include <string>
#include <stdio.h>
#include <math.h>
#include <stack>
#include <queue>
#include <list>
#include <iostream>
using namespace std;
int saiki(int, int);
int n, A[20], m, q[200] = { 0 }, x;
int main(void)
{
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) { scanf_s("%d", &A[i]); }
	scanf_s("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf_s("%d", &x);
		q[i] = saiki(0, 0);
	}
	for (int i = 0; i < m; i++) {
		if (q[i]) { printf("yes\n"); }
		else { printf("no\n"); }
	}
}
int saiki(int s, int l)
{
	for (int i = l; i < n; i++) {
		if (A[i] + s == x) { return 1; }
		if (A[i] + s < x) { 
			if (saiki(A[i] + s, i + 1)) return 1;
		}
	}
	return 0;
}