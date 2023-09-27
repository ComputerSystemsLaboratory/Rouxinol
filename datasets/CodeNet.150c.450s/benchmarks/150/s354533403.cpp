// Counting Sort
#include <bits/stdc++.h>
using namespace std;

void CountnigSort(vector<int> &A, vector<int> &B, int k){
	vector<int> C(k+1,0);

	for(int i=0;i<A.size();i++)
		C[A[i]]++;

	for(int i=1;i<=k; i++)
		C[i] += C[i-1];

	for(int i=A.size()-1; i>=0; i--){
		B[C[A[i]]-1] = A[i];
		C[A[i]]--;
	}
}

int main(void){
	int n; cin >> n;
	vector<int> A(n,0);
	vector<int> B(n,0);
	int k=0;
	for(int i=0; i<n; i++){
		cin >> A[i];
		if(k<A[i])
			k = A[i];
	}

	CountnigSort(A,B,k+1);

	for(int i=0; i<n; i++)
		cout << B[i] << (i<n-1?" ":"");
	cout << endl;

}