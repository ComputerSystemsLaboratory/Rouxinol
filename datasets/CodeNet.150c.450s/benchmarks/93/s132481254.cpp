#include <iostream>
#include <cstdio>
#include <algorithm>
#define MAXN 100001
#define INF 200000000
using namespace std;

struct Card{
	char suit;
	int num;
};

Card L[MAXN/2 + 2], R[MAXN/2 + 2];

void merge(Card A[], int left, int mid, int right){
	int n1 = mid - left;
	int n2 = right - mid;
	for (int i = 0; i < n1; i++) {
		L[i] = A[left + i];
	}
	for (int i = 0; i < n2; i++) {
		R[i] = A[mid + i];
	}
	L[n1].num = INF;
	R[n2].num = INF;
	int i = 0, j = 0;
	for (int k = left; k < right; k++) {
		if (L[i].num <= R[j].num) {
			A[k] = L[i++];
		}
		else {
			A[k] = R[j++];
		}
	}
}

void mergeSort(Card A[], int left, int right)
{
	int mid;
	if (left + 1 < right) {
		mid = (left + right) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}

int partition(Card A[], int left, int right){
	int i = left - 1;
	Card x = A[right];
	for (int j = left; j < right; j++) {
		if (A[j].num <= x.num) {
			i++;
			Card temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}
	Card t = A[i+1];
	A[i+1] = A[right];
	A[right] = t;
	return i+1;
}

void quickSort(Card A[], int p, int r){
	if (p < r) {
		int q = partition(A, p, r);
		quickSort(A, p, q-1);
		quickSort(A, q+1, r);
	}
}


int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	Card c1[MAXN], c2[MAXN];
//	for (int i = 0; i < n; i++) {
//		scanf("%c %d", &c1[i].suit, &c1[i].num);
//		c2[i].suit = c1[i].suit;
//		c2[i].num = c1[i].num;
//	}
	char S[10];
	int v;
	for (int i = 0; i < n; i++) {
		scanf("%s %d", S, &v);
		c2[i].suit = c1[i].suit = S[0];
		c2[i].num = c1[i].num = v;
	}
	
	mergeSort(c1, 0, n);
	quickSort(c2, 0, n-1);
	
	int stable = 1;
	for (int i = 0; i < n;i++) {
		if (c1[i].suit != c2[i].suit) {
			stable = 0;
		}
	}
	
	if (stable == 1) {
		printf("Stable\n");
	}else {
		printf("Not stable\n");
	}
	for (int i = 0; i < n; i++) {
		printf("%c %d\n", c2[i].suit, c2[i].num);
	}
	return 0;
}
