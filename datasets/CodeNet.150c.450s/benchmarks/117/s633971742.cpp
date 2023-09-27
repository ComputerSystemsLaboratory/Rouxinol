#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include<cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include<iostream>
#include<queue>
#include<set>
#include<string>
#include <vector>

#define ll long long
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)   FOR(i,0,n)
#define FORL(i,a,b) for(ll i=(a);i<(b);++i)
#define REPL(i,n) FORL(i,0,n)
#define INFTY (2e+9)

using namespace std;

/*
merge(A, left, mid, right)
n1 = mid - left;
n2 = right - mid;
L[0...n1], R[0...n2] を生成
for i = 0 to n1-1
L[i] = A[left + i]
for i = 0 to n2-1
R[i] = A[mid + i]
L[n1] = INFTY
R[n2] = INFTY
i = 0
j = 0
for k = left to right-1
if L[i] <= R[j]
A[k] = L[i]
i = i + 1
else
A[k] = R[j]
j = j + 1
*/
int merge(int A[], int left, int mid, int right){
	int c = 0, n1, n2;
	n1 = mid - left;
	n2 = right - mid;
	int *L, *R;
	L = new int[n1 + 1];
	R = new int[n2 + 1];
	REP(i, n1){
		L[i] = A[left + i];
	}
	REP(i, n2){
		R[i] = A[mid + i];
	}
	L[n1] = INFTY;
	R[n2] = INFTY;
	int i = 0, j = 0;
	FOR(k, left, right){
		if (L[i] <= R[j]){
			A[k] = L[i];
			i++;
		}
		else{
			A[k] = R[j];
			j++;
		}
		c++;
	}
	delete[] L;
	delete[] R;
	return c;
}
/*
mergeSort(A, left, right)
if left+1 < right
mid = (left + right)/2;
mergeSort(A, left, mid)
mergeSort(A, mid, right)
merge(A, left, mid, right)
*/
int mergeSort(int A[], int left, int right){
	int c = 0, mid;
	if (left + 1 < right){
		mid = (left + right) / 2;
		c += mergeSort(A, left, mid);
		c += mergeSort(A, mid, right);
		c += merge(A, left, mid, right);
	}
	return c;
}

int main(){
	int n, S[500000];
	scanf("%d", &n);
	REP(i, n){
		scanf(" %d", &S[i]);
	}

	int c;
	c = mergeSort(S, 0, n);

	REP(i, n){
		if (i != 0){
			printf(" ");
		}
		printf("%d", S[i]);
	}
	printf("\n%d\n", c);

	return 0;
}
