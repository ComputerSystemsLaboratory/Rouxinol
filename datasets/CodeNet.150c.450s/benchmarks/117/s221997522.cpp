#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int cnt = 0;
void merge(vector< int > &A,int left,int mid,int right){
	int n1 = mid - left;
	int n2 = right - mid;
	vector< int > L(n1+1);
	vector< int > R(n2+1);

	for (int i = 0; i < n1; i++){
		L[i] = A[left + i];
	}
	for (int i = 0; i < n2; i++){
		R[i] = A[mid + i];
	}
	L[n1] = 0x7FFFFFFF;
	R[n2] = 0x7FFFFFFF;

	int i = 0;
	int j = 0;
	for (int k = left; k < right; k++){
		if (L[i] <= R[j]){
			A[k] = L[i];
			i++;
			cnt++;
		}else{
			A[k] = R[j];
			j++;
			cnt++;
		}
	}
}

void mergesort(vector< int > &A,int left,int right){
	if (left + 1 < right){
		int mid = (left + right)/2;
		mergesort(A,left,mid);
		mergesort(A,mid,right);
		merge(A,left,mid,right);	
	}
}

int main(){
	int n; cin >> n;
	vector< int>  A(n);
	for (int i = 0; i < n; i++){
		cin >> A[i];
	}
	mergesort(A,0,n);
	for (int i = 0; i < n; i++){
		cout << A[i] ;
		if (i != n-1){
			cout << " ";
		}
	}
	cout << endl;
	cout << cnt << endl;
return 0;
}