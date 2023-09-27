#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 500000
#define SENTINEL 2000000000

struct Card{
	char pattern;
	int value;
};

Card L[MAX/2+2], R[MAX/2+2];

void merge(Card A[], int n, int left, int mid, int right){
	int n1 = mid - left;
	int n2 = right - mid;
	for(int i = 0; i < n1; i++){
		L[i] = A[left + i];
	}
	for(int i = 0; i < n2; i++){
		R[i] = A[mid + i];
	}
	L[n1].value = SENTINEL;
	R[n2].value = SENTINEL;
	int i = 0, j = 0;
	for(int k = left; k < right; k++){
		if( L[i].value <= R[j].value){
			A[k] = L[i++];
		}else{
			A[k] = R[j++];
		}
	}
}

void mergeSort(Card A[], int n, int left, int right){
	if(left + 1 < right){
		int mid = (left + right) / 2;
		mergeSort(A, n, left, mid);
		mergeSort(A, n, mid, right);
		merge(A, n, left, mid, right);
	}
}

int partition(Card A[], int n, int p, int r){
	int i, j;
	Card t, x;
	x = A[r];
	i = p - 1;
	for(j = p; j < r; j++){
		if(A[j].value <= x.value){
			i++;
			t = A[i];
			A[i] = A[j];
			A[j] = t;
		}
	}
	t = A[i +1];
	A[i +1] = A[r];
	A[r] = t;
	return i+1;
}

void quickSort(Card A[], int n, int p, int r){
	int q;
	if(p < r){
		q = partition(A, n, p, r);
		quickSort(A, n, p, q - 1);
		quickSort(A, n, q + 1, r);
	}
}

int main(){
	Card M[MAX];
	Card Q[MAX];
	int i;
	int n = 0, inputValue = 0;
	char pattern[5];
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%s %d", pattern, &inputValue);
		M[i].pattern = pattern[0];
		Q[i].pattern = pattern[0];
		M[i].value = inputValue;
		Q[i].value = inputValue;
	}
	
	mergeSort(M, n, 0, n);
	quickSort(Q, n, 0, n-1);
	
	int check = 0;
	for(i = 0; i < n; i++){
		if(M[i].pattern != Q[i].pattern){
			check++;
			break;
		}
	}
	
	if(check == 0){
		printf("Stable\n");
	}else{
		printf("Not stable\n");
	}
	
	for(i = 0; i < n; i++){
		if(i != 0){
			printf("\n");
		}
		printf("%c %d", Q[i].pattern, Q[i].value);
	}
	printf("\n");
	
	return 0;
}
