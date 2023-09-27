#include<iostream>
using namespace std;

int Merge(int A[], int left, int mid, int right){
	int n1 = mid - left;
	int n2 = right - mid;
	int L[n1+1], R[n2+1];
	int cnt = 0;
	
	for(int i=0; i<n1; i++){
		L[i] = A[left + i];
	}
	for(int i=0; i<n2; i++){
		R[i] = A[mid + i];
	}
	L[n1] = 1000000000;
	R[n2] = 1000000000;
	
	int i=0, j=0;
	
	for(int k=left; k<right; k++){
		if(L[i] <= R[j]){
			A[k] = L[i];
			i++;
			cnt++;
		}else{
			A[k] = R[j];
			j++;
			cnt++;
		}
	}
	
	return cnt;
}

int Merge_Sort(int A[], int left, int right){
	int cnt = 0;
	
	if(left+1 < right){
		int mid = (left + right)/2;
		cnt += Merge_Sort(A, left, mid);
		cnt += Merge_Sort(A, mid, right);
		cnt += Merge(A, left, mid, right);
	}
	
	return cnt;
}


int main(void){
	int A[500000], n, left, right, cnt;
	
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> A[i];
	}
	
	left = 0;
	right = n;
	
	cnt = Merge_Sort(A, left, right);
	
	for(int i=0; i<n-1; i++){
		cout << A[i] << " ";
	}
	cout << A[n-1] << "\n";
	
	cout << cnt << "\n";
	
	return 0;
}
