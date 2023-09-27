// Merge Sort
#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
void Merge(int *A, int left, int mid, int right){
	int n1 = mid - left;
	int n2 = right - mid;
	int L[n1+1], R[n2+1];
	for(int i=0; i<n1; i++)
		L[i] = A[left + i];
	for(int i=0; i<n2; i++)
		R[i] = A[mid + i];
	L[n1] = numeric_limits<int>::max();
	R[n2] = numeric_limits<int>::max();
	int i=0; int j=0;
	for(int k=left;k<right;k++){
		if(L[i]<=R[j]){
			A[k] = L[i];
			i++;
		}
		else{
			A[k] = R[j];
			j++;
		}
		cnt++;
	}
}

void MergeSort(int *A, int left, int right){
	if((left+1)<right){
		int mid = (left+right)/2;
		MergeSort(A,mid,right);
		MergeSort(A,left,mid);
		Merge(A,left,mid,right);
	}
}

int main(){
	int n; cin >> n;
	int S[n];
	for(int i=0;i<n;i++)
		cin >> S[i];
	MergeSort(S,0,n);
	for(int i=0; i<n; i++)
		cout << S[i] << ((i<(n-1))?" ":"");
	cout << endl;
	cout << cnt << endl;
	return 0;
}