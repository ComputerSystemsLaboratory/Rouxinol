#include<iostream>
#include<vector>
using namespace std;

vector<int> Change(vector<int> X, int m, int n){
	int x = X[m];
	X[m] = X[n];
	X[n] = x;
	return X;
}

vector<int> Subvec(vector<int> X, int p, int l){
	vector<int> Y;
	for(int i = p; i < p + l; i++) Y.push_back(X[i]);
	return Y;
}

vector<int> BubbleSort(vector<int> A, int i){
	int N = A.size() - 1;
	int j = 0;
	for(int j = 0; j < N-i; j++){
		if(A[j] > A[j+1]){
			A = Change(A, j, j+1);
			A[N]++;
		}
	}
	return A;
}

void Output(vector<int> A){
	int n = A.size() - 1;
	for(int i = 0; i < n; i++) cout << A[i] << ' ';
	cout << A[n] << endl;
}

int main(){
	int N;
	cin >> N;
	vector<int> A;
	for(int i = 0; i < N; i++){
		int a;
		cin >> a;
		A.push_back(a);
	}
	A.push_back(0);
	for(int i = 1; i < N; i++) A = BubbleSort(A, i);
	Output(Subvec(A, 0, N));
	cout << A[N] << endl;
	return 0;
}