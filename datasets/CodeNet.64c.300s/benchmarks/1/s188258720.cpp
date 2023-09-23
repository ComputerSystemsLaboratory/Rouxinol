#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
int A[100001];
int partition(int p, int r){
	int x = A[r];
	int i = p - 1;
	for (int j = p; j <= r - 1; ++j){
		if (A[j] <= x)  swap(A[++i], A[j]);
	}
	swap(A[i + 1], A[r]);
	return i + 1;
}
int main(){
	int n; scanf("%d",&n);
	for (int i = 0; i < n; ++i) scanf("%d",&A[i]);
	int pivot = partition(0, n - 1);
	for (int i = 0; i < n; ++i){
		if (i != 0) cout << ' ';
		if (i == pivot){
			cout << '[' << A[i] << ']';
		}
		else cout << A[i];
	}
	cout << '\n';
}