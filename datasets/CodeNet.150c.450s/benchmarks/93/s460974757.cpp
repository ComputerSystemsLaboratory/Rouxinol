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

struct Card{
	char mark;
	int num;
};

int partition(Card A[], int p, int r){
	int x = A[r].num, i = p - 1;
	Card tmp;
	FOR(j, p, r){
		if (A[j].num <= x){
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

/*
1 quicksort(A, p, r)
2   if p < r
3     q = partition(A, p, r)
4     quickSort(A, p, q-1)
5     quickSort(A, q+1, r)
*/

void quicksort(Card A[], int p, int r){
	if (p < r){
		int q = partition(A, p, r);
		quicksort(A, p, q - 1);
		quicksort(A, q + 1, r);
	}
}

int merge(Card A[], int left, int mid, int right){
	int c = 0, n1, n2;
	n1 = mid - left;
	n2 = right - mid;
	Card *L, *R;
	L = new Card[n1 + 1];
	R = new Card[n2 + 1];
	REP(i, n1){
		L[i] = A[left + i];
	}
	REP(i, n2){
		R[i] = A[mid + i];
	}
	L[n1].num = INFTY;
	R[n2].num = INFTY;
	int i = 0, j = 0;
	FOR(k, left, right){
		if (L[i].num <= R[j].num){
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

int mergeSort(Card A[], int left, int right){
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
	int n;
	Card A[100000], B[100000];

	scanf("%d", &n);
	
	REP(i, n){
		getchar();
		scanf("%c %d", &A[i].mark, &A[i].num);
		B[i] = A[i];
	}

	quicksort(A, 0, n - 1);
	mergeSort(B, 0, n);

	bool f = true;
	REP(i, n){
		if (B[i].mark != A[i].mark){
			f = false;
		}
	}
	if (f){
		printf("Stable\n");
	}
	else{
		printf("Not stable\n");
	}
	REP(i, n){
		printf("%c %d\n", A[i].mark, A[i].num);
	}

	return 0;
}
