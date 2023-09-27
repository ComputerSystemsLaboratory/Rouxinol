#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;
#define SENTINEL 2000000000
#define MAX 500000
int cnt;
void out(int a[], int n) {
	int i;
	cout << a[0];
	for (i = 1; i < n; i++) {
		cout << " " << a[i];
	}
	cout << endl;

}


int merge(int a[],int left,int mid,int right) {
	int i,j,n1,n2,k;
	n1 = mid - left;
	n2 = right - mid;
	int L[MAX/2+2], R[MAX/2+2];
	for (i = 0; i < n1; i++) {
		L[i] = a[left + i];
	}
	for (i = 0; i < n2; i++) {
		R[i] = a[mid + i];
	}
	L[n1] = R[n2] = SENTINEL;
	i = 0; j = 0;
	for (k = left; k < right; k++) {
		cnt++;
		if (L[i] <= R[j]) {
			a[k] = L[i++];
		
		}
		else {
			a[k] = R[j++];
			
		}
	}
	//out(a, sizeof(a));
	return 0;
}
int mergeSort(int a[],int left,int right) {
	int mid;
	if (left + 1 < right) {
		mid = (left + right) / 2;
		mergeSort(a, left, mid);
		mergeSort(a, mid, right);
		merge(a,left, mid, right);
	}
	return 0;
}

int main() {
	int n,i,a[MAX+4];
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	mergeSort(a, 0, n);
	out(a, n);
	cout << cnt << endl;
	return 0;

}