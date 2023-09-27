#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;
int A[2000001];
int B[2000001];
long C[10001];
long n;
void CountingSort(int k){
	memset(C, 0, sizeof(C));
	for (long j = 0; j < n; ++j) ++C[A[j]];
	for (long i = 1; i <= k; ++i) C[i] += C[i - 1];
	for (long j = n - 1; j >= 0; --j){
		B[C[A[j]]] = A[j];
		--C[A[j]];
	}
}
int main(){
	scanf("%ld", &n);
	int MAX = -1;
	for (long i = 0; i < n; ++i) scanf("%d", &A[i]);
	for (long i = 0; i < n; ++i){
		MAX = max(MAX, A[i]);
	}
	CountingSort(MAX);
	for (long i = 1; i <= n; ++i){
		if (i != 1) cout << ' ';
		cout << B[i];
	}
	cout << '\n';
}