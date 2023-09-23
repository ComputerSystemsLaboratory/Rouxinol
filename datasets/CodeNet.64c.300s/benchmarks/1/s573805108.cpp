#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>

using namespace std;
int A[100001];
int n;
int partition(){
	int i = -1;
	for (int j = 0; j < n - 1; ++j) if (A[j] <= A[n-1]) swap(A[++i], A[j]);
	swap(A[i + 1], A[n-1]);
	return i + 1;
}
int main(){
	scanf("%d",&n);
	for (int i = 0; i < n; ++i) scanf("%d",&A[i]);
	int pivot = partition();
	for (int i = 0; i < n; ++i){
		if (i != 0) cout << ' ';
		if (i == pivot){
			cout << '[' << A[i] << ']';
		}
		else cout << A[i];
	}
	cout << '\n';
}