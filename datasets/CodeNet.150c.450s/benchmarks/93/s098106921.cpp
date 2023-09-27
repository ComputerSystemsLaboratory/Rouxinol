#include <iostream>
using namespace std;
#define MAX 100001
#define SENTINEL 2000000000
struct Card { char suit; int val; };
Card L[MAX / 2 + 2], R[MAX / 2 + 2];

void merge(struct Card B[], int left,int mid, int right) {
	int i, j,n1,n2,k;
	
	n1 = mid - left;
	n2 = right - mid;
	for (i = 0; i < n1; i++){L[i] = B[left + i];}
	for (i = 0; i < n2; i++){R[i] = B[mid + i];}
	L[n1].val=R[n2].val=SENTINEL;
	i = j = 0;
	for (k = left; k < right; k++) {
		if (L[i].val <= R[j].val){B[k] = L[i++];}
		else {B[k] = R[j++];}
	}


}
void mergesort(struct Card B[], int left, int right) {
	if (right > left+1) {
		int mid;
		mid = (right + left) / 2;
		mergesort(B, left, mid);
		mergesort(B, mid, right);
		merge(B, left, mid, right);
	}
}

void quicksort(struct Card A[], int a, int b) {	
	if (b > a) {
		int i, j, v;
		j = a;
		v = A[b].val;
		for (i = a; i <= b; i++) { if (A[i].val <= v)swap(A[i], A[j++]); }
		quicksort(A, a, j - 2);
		quicksort(A, j, b);
	}
}
int main(void) {
	int i, n,flag=1;
	Card A[MAX],B[MAX];
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> A[i].suit >> A[i].val;
		B[i].suit = A[i].suit; B[i].val = A[i].val;
	}
	quicksort(A, 0, n - 1);
	mergesort(B, 0, n);

	for (i = 0; i < n; i++) {
	    if(A[i].suit!=B[i].suit)flag=0;
	}
	flag==0? cout<<"Not stable"<<endl: cout<<"Stable"<<endl;
		for (i = 0; i<n; i++) {
		cout << A[i].suit <<" "<< A[i].val <<endl;}
	return 0;
}