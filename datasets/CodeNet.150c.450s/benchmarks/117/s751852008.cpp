#include <iostream>
using namespace std;

long int a[600000], L[600000], R[600000];
int n, i, j, k, t=0; //global variable retains its value

void merge(int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
		for (i=0; i<n1; i++) { 
			L[i] = a[left+i];
		}
		
		for (i=0; i<n2; i++) { 
			R[i] = a[mid+i]; 
		}

	L[n1] = 10000000000; //sentinel means a very large value, so just type a very large value here that fits in the array
	R[n2] = 10000000000;
	i = 0; //so this initialises i=0 again, instead of using the retained value
	j = 0;

	for (k=left; k<right; k++){ 
		if (L[i] <= R[j]) { a[k] = L[i]; i = i+1; t++; } //comparison is made here, so t should be here
		  else { a[k] = R[j]; j = j+1; t++; } //comparison is done here too, so t should be here too

		}
}

void mergesort(int left, int right) {   //if 2 arguments are given in (), always call the same function with TWO arguments
	if ( left+1 < right ) {
		int mid = (left+right)/2;
		mergesort(left, mid);
		mergesort(mid, right);
		merge(left, mid, right);
		}
}

int main() {
	cin >> n;
	for ( i=0; i<n; i++) cin >> a[i]; 
    mergesort(0, n);
	for ( i=0; i<n-1; i++) cout << a[i] << " ";
	cout << a[n-1] << endl;
	cout << t << endl;
	return 0;
}