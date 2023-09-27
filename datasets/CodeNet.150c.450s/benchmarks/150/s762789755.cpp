/*
* CountingSort
*/

#include<iostream>
#include<vector>
using namespace std;

void input(vector<int> &A){
	int n =0;
	cin >> n;
	A.resize(n);
	for(int i=0; i<n ; i++){
	 	cin >> A[i];
	}
}

void output(vector<int> &out){
	 int size = out.size();
	 for(int i=0; i<size ; i++){
	 	cout << out[i];
	 	if(i< size-1){
	 		cout << " ";
	 	}
	 }
	cout << endl;
}

void CountingSort(vector<int> &A, vector<int> &B, int k){
	int n = A.size();
	//0?????????
	vector<int> C(k,0);
//	for(int i=0; i<k; i++){
//		C[i]=0;
//	}
	//C[i] ??? i ???????????°????¨??????????
	for(int j=0; j<n; j++){
		C[A[j]]++;
	}
	// C[i] ??? i ??\????????°???????????°????¨??????????
	for(int i=1; i<k ;i++){
		C[i] += C[i-1];
	}
	for(int j= (n-1); j>=0; j--){
		B[C[A[j]]-1] = A[j];
		C[A[j]]--;
	}
	return;
}

int main(){
	
	vector<int> vecA;
	input(vecA);
	vector<int> vecB(vecA.size(),0);
	CountingSort(vecA, vecB, 10000);
	output(vecB);
	return 0;
}