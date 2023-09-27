#include <iostream>

using namespace std;


int merge(int *arr,int left,int m,int right) {
	int n1 = m -left;
	int n2 = right -m;
	int *L = new int[n1];
	int *R = new int[n2];
	int index1 = 0,index2  =0;
	int cnt = 0;
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
			cnt++;
			arr[i] = R[index2++];
		} else if (index2 >= n2) {
			cnt++;
			arr[i] = L[index1++];
		} else {
			if (L[index1] <= R[index2]) {
				arr[i] = L[index1++];
			} else {
				arr[i] = R[index2++];
			}
			cnt++;
		}
	}
	return cnt;
}

//包括left但不包括right 
int mergeSort(int *arr,int left,int right) {
	if (right - left > 1) {
		int m = (left + right) / 2;
		int a = mergeSort(arr,left,m);
		int b = mergeSort(arr,m,right);
		int c = merge(arr,left,m,right);
		return a +  b + c;
	} else {
		return 0;
	}
	
}
int main() {
	int n;
	cin >> n;
	int *arr = new int[n];
	for (int i=0;i<n;i++) {
		cin >> arr[i];
	}
	int x = mergeSort(arr,0,n);
	for (int i=0;i<n;i++) {
		cout << arr[i];
		if (i == n-1) {
			cout << endl;
		} else {
			cout << " ";
		}
	}
	cout << x << endl;
} 
