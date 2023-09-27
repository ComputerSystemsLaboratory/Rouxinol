#include<iostream>
#include<limits.h>
#include<vector>

using namespace std;

void merge(vector<int> &A,int left,int mid,int right,int &c) {
	int n1 = mid - left;
	int n2 = right - mid;
	vector<int> L(n1+1,0);
	vector<int> R(n2+1,0);
	for (int i = 0;i < n1;i++) L[i] = A[left+i];
	for (int i = 0;i < n2;i++)R[i] = A[mid + i];
	L[n1] = INT_MAX;
	R[n2] = INT_MAX;
	int i = 0;
	int j = 0;
	for (int k = left;k < right;k++) {
		if (L[i] <= R[j]) {
			A[k] = L[i++];
			c++;
		}
		else {
			A[k] = R[j++];
			c++;
		}
	}
}
void mergeSort(vector<int> &A,int left,int right,int &c) {
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		mergeSort(A,left,mid,c);
		mergeSort(A,mid,right,c);
		merge(A,left,mid,right,c);
	}
}

int main() {

	int count = 0;
	int n = 0;
	cin >> n;
	vector<int> array(n,0);
	for (int i = 0;i < n;i++)cin>>array[i];

	mergeSort(array, 0, array.size(), count);

	for (int i = 0;i < array.size();i++) {
		if (i != array.size() - 1) {
			cout << array[i] << ' ';
		}
		else cout << array[i] << endl;
	}
	cout << count << endl;

	return 0;
}
