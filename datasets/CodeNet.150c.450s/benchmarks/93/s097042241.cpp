#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
const int INF = 0x3f3f3f3f;
const int MAXN = 100005;

struct card {
	char suit;
	int value;
};

card A1[MAXN], A2[MAXN], L[MAXN/2], R[MAXN/2];

void merge(card A[], int left, int mid, int right){
	int n1 = mid - left, n2 = right - mid;
	for(int i = 0; i < n1; i++) L[i] = A[left+i];
	for(int i = 0; i < n2; i++) R[i] = A[mid+i];
	L[n1].value = R[n2].value = INF;
	int i = 0, j = 0;
	for(int k = left; k < right; k++){
		if(L[i].value <= R[j].value)
			A[k] = L[i++];
		else
			A[k] = R[j++];
	}
}

void mergeSort(card A[], int left, int right){
	if(left + 1 < right){
		int mid = (left + right) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}

int partition(card A[], int p, int r){
	int x, i;
	card temp;
	x = A[r].value; 
	i = p - 1;
	for(int j = p; j < r; j++){
		if(A[j].value <= x){
			i++;
			temp = A[i]; A[i] = A[j]; A[j] = temp;
		}
	}
	temp = A[i+1]; A[i+1] = A[r]; A[r] = temp;
	return i+1;
}

void quickSort(card A[], int p, int r){
	if(p < r){
		int q = partition(A, p, r);
		quickSort(A, p, q-1);
		quickSort(A, q+1, r);
	}
}

int main(){
	int n, stable = 1;
	char s[10];
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%s%d", s, &A1[i].value);
		A1[i].suit = s[0];
		A2[i] = A1[i];
	}
	mergeSort(A1, 0, n);
	quickSort(A2, 0, n-1);
	for(int i = 0; i < n; i++)
		if(A1[i].suit != A2[i].suit)
			stable = 0;
	if(stable)
		printf("Stable\n");
	else
		printf("Not stable\n");
	for(int i = 0; i < n; i++)
		printf("%c %d\n", A2[i].suit, A2[i].value);
	return 0;
}