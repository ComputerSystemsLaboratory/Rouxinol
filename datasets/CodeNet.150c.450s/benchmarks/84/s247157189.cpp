//逆序数 
#include <iostream>

using namespace std;

typedef long long llong;

llong merge(int *arr,int left,int m,int right) {
	int n1 = m -left;
	int n2 = right -m;
	int *L = new int[n1];
	int *R = new int[n2];
	int index1 = 0,index2  =0;
	llong cnt = 0;
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
			if (L[index1] <= R[index2]) {
				arr[i] = L[index1++];
			} else {
				cnt += n1 - index1; 
				arr[i] = R[index2++];
			}
		}
	}
	return cnt;
}

//包括left但不包括right 
llong mergeSort(int *arr,int left,int right) {
	if (right - left > 1) {
		llong m = (left + right) / 2;
		llong a = mergeSort(arr,left,m);
		llong b = mergeSort(arr,m,right);
		llong c = merge(arr,left,m,right);
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
	llong x = mergeSort(arr,0,n);
	cout << x << endl;
} 
