#include <iostream>

using namespace std;

//包括p但不包括r 
int partition(int *arr,int p,int r) {
	int x = arr[r-1];
	int i,j;
	for (j = p,i = p;j<r;j++) {
		if (arr[j] <= x) {
			int t = arr[i];
			arr[i] = arr[j];
			arr[j] = t;
			i++;
		}
	}
	return i-1;
}

int main() {
	int n;
	cin >> n;
	int *arr = new int[n];
	for (int i=0;i<n;i++) {
		cin >> arr[i];
	}
	int q = partition(arr,0,n);
	for (int i=0;i<n;i++) {
		if (i == q) {
			cout << "[" << arr[i] << "]";
		} else {
			cout << arr[i];
		}
		if (i == n-1) {
			cout << endl;
		} else {
			cout << " ";
		}
	}
}
