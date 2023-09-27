#include <iostream>

using namespace std;

typedef struct {
	string color;
	int val;
} Card;

void merge(Card *arr,int left,int m,int right) {
	int n1 = m - left;
	int n2 = right - m;
	int index1 = 0,index2 = 0;
	Card * L = new Card[n1];
	Card * R = new Card[n2];
	for (int i = left;i<right;i++) {
		if (i < m) {
			L[index1++] = arr[i];
		} else {
			R[index2++] = arr[i];
		}
	}
	index1 = 0;
	index2 = 0;
	for (int i = left;i<right;i++) {
		if (index1 >= n1) {
			arr[i] = R[index2++];
		} else if (index2 >= n2) {
			arr[i] = L[index1++];
		} else {
			if (L[index1].val <= R[index2].val) {
				arr[i] = L[index1++];
			} else {
				arr[i] = R[index2++];
			}
		} 
	}
	delete[] L;
	delete[] R;
	
}

void mergeSort(Card *arr,int left,int right) {
	if (right - left > 1) {
		int m = (left + right) / 2;
		mergeSort(arr,left,m);
		mergeSort(arr,m,right);
		merge(arr,left,m,right); 
	} 
}

//包括p但不包括r 
int partition(Card *arr,int p,int r) {
	int x = arr[r-1].val;
	int i,j;
	for (j = p,i = p;j<r;j++) {
		if (arr[j].val <= x) {
			Card t = arr[i];
			arr[i] = arr[j];
			arr[j] = t;
			i++;
		}
	}
	return i-1;
}

void quickSort(Card *arr,int l,int r) {
	if (r - l > 1) {
	  int q = partition(arr,l,r);
	  quickSort(arr,l,q);
	  quickSort(arr,q,r);
    }
}

int main() {
	int n;
	cin >> n;
	Card *arr = new Card[n];
	Card *arr2 = new Card[n];
	for (int i=0;i<n;i++) {
		cin >> arr[i].color >> arr[i].val;
		arr2[i].color = arr[i].color;
		arr2[i].val = arr[i].val;
	}
	quickSort(arr,0,n);
	mergeSort(arr2,0,n);
	int i;
	for (i = 0;i<n;i++) {
		if (arr[i].color != arr2[i].color) {
			cout << "Not stable" << endl;
			break;
		}
	}
	if (i == n) {
		cout << "Stable" << endl;
	}
	for (int i=0;i<n;i++) {
		cout << arr[i].color << " " << arr[i].val << endl;
	}
}
