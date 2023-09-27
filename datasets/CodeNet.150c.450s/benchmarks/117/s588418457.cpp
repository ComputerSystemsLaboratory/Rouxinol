#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <limits.h>
using namespace std;
long n;
long S[500001];
long cnt;
void merge(long left, long mid, long right){
	long n1 = mid - left;
	long n2 = right - mid;
	long* L = new long[n1+1];
	long* R = new long[n2+1];
	for (long i = 0; i < n1; ++i) L[i] = S[left + i];
	for (long i = 0; i < n2; ++i) R[i] = S[mid + i];
	L[n1] = LONG_MAX;
	R[n2] = LONG_MAX;
	long i = 0, j = 0;
	for (long k = left; k < right; ++k){
		if (L[i] <= R[j]){
			S[k] = L[i]; ++i;
		}
		else{
			S[k] = R[j]; ++j;
		}
		++cnt;
	}
	delete[] L;
	delete[] R;
}
void mergeSort(long left, long right){
	if (left + 1 < right){
		long mid = (left + right) / 2;
		mergeSort(left, mid);
		mergeSort(mid, right);
		merge(left, mid, right);
	}
}

int main(){
	long n; scanf("%ld",&n);
	for (long i = 0; i < n; ++i) scanf("%ld",&S[i]);
	mergeSort(0,n);
	for (long i = 0; i < n; ++i){
		if (i != 0) cout << ' ';
		cout << S[i];
	}
	cout << '\n' << cnt << '\n';
}