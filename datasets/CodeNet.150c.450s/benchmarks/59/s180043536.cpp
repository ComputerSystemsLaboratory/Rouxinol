#include<iostream>
#include<vector>

using namespace std;

void insertsort(vector<int> &A,int n){
	
	for(int i = 0;i < n;i++){
		int v = A[i];
		int j = i-1;
		while(j >= 0 && v < A[j]){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = v;
		for(j=0;j<n-1;j++)cout << A[j] << " ";
		cout << A[j] << endl;
	}
}

int main(){
	int n,a;
	cin >> n;
	vector<int> A;
	for(int i = 0 ; i < n;i++){
		cin >> a;
		A.push_back(a);
	}
	insertsort(A,n);
	return 0;
}