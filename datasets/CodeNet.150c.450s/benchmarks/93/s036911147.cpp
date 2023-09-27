#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include<iostream>
#define MAX 100000

int n;

struct q{
	char c;
	int s;
};
struct q A[MAX], B[MAX], tmp;
/*
int partition(int p, int r){
	int x = A[r - 1].s, j = 0;
	for (int i = 0; i < n; i++){
		if (A[i].s <= x) {
			tmp = A[j];
			A[j++] = A[i];
			A[i] = tmp;
		}
	}
	return j - 1;
}
*/
int partition(int p, int r){
	int x = A[r].s, j = p-1;
	for (int i = p; i < r; i++){
		if (A[i].s <= x) {
			j++;
			tmp = A[j];
			A[j] = A[i];
			A[i] = tmp;
		}
	}
	std::swap(A[j+1], A[r]);
	return j+1;
}

int quicksort(int p, int r){
	if (p < r){
		int qq = partition(p, r);
		quicksort(p, qq-1);
		quicksort(qq+1, r);
	}

	return 0;
}

int merge(int left, int mid, int right){
	struct q L[MAX / 2 + 1], R[MAX / 2 + 1];
	int n1 = mid - left, n2 = right - mid;
	int l = 0, r = 0;
	for (int i = 0; i < n1; ++i)L[i] = B[left + i];
	for (int i = 0; i < n2; ++i)R[i] = B[mid + i];
	L[n1].s = R[n2].s = 2000000000;
	for (int i = left; i < right; i++){
		if (L[l].s <= R[r].s){
			B[i] = L[l++];
		}
		else {
			B[i] = R[r++];
		}
	}
	return 0;
}

int mergesort(int left, int right){
	if (left + 1 < right){
		int mid = (right + left) / 2;
		mergesort(left, mid);
		mergesort(mid, right);
		merge(left, mid, right);
	}
	return 0;
}

int main(){
	scanf("%d", &n);
	char cc[2]; int ss;
	for (int i = 0; i < n; i++){
		scanf("%s %d", cc, &ss);
		B[i].c = A[i].c = cc[0];
		B[i].s = A[i].s = ss;
	}
	
	quicksort(0, n-1);
	mergesort(0, n);
	int dif = 1;
	for(int i = 0;i < n;i++)if(A[i].c != B[i].c)dif = 0;
	if(dif == 1) printf("Stable\n");
	if(dif == 0)printf("Not stable\n");
	for(int i = 0;i < n;i++){
		printf("%c %d\n", A[i].c, A[i].s);
	}
	//printf("%c %d\n", A[n - 1].c, A[n - 1].s);
	return 0;
}

/*
6
D 3
H 2
D 1
S 3
D 2
C 1
*/

/*
5
H 1
D 1
S 1
C 1
H 2
*/