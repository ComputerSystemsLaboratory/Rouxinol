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

using namespace std;

/*
1 partition(A, p, r)
2   x = A[r]
3   i = p-1
4   for j = p to r-1
4     if A[j] <= x
5       i = i+1
6       A[i] と A[j] を交換
7   A[i+1] と A[r] を交換
8   return i+1
*/

int partition(int A[], int p, int r){
	int x = A[r], i = p - 1, tmp;
	FOR(j, p, r){
		if (A[j] <= x){
			i++;
			tmp = A[i];
			A[i] = A[j];
			A[j] = tmp;
		}
	}
	tmp = A[i + 1];
	A[i + 1] = A[r];
	A[r] = tmp;
	return i + 1;
}

int main(){
	int n, A[100000];

	scanf("%d", &n);
	REP(i, n){
		scanf(" %d", &A[i]);
	}

	int k;
	k = partition(A, 0, n - 1);

	REP(i, n){
		if (i != 0){
			printf(" ");
		}
		if (i == k){
			printf("[");
		}
		printf("%d", A[i]);
		if (i == k){
			printf("]");
		}
	}printf("\n");


	return 0;
}
