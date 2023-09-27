#include<iostream>
#include<vector>
using namespace std;

void Change(int x, int y){
	int z = y;
	y = x;
	x = z;
}

vector<int> Subvec(vector<int> X, int p, int l){
	vector<int> Y;
	for(int i = p; i < p+l; i++) Y.push_back(X[i]);
	return Y;
}

vector<int> SelectionSort(vector<int> A, int i){
	int N = A.size() - 1;
	int j_0 = i;
	for(int j = i; j < N; j++){
		if(A[j] < A[j_0]) j_0 = j;
	}
	if(j_0 != i){
		A[N]++;
		int a = A[j_0];
		A[j_0] = A[i];
		A[i] = a;
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
	A.push_back(0); //A[N]?????\??????????????°?????¨???
	for(int i = 0; i < N; i++) A = SelectionSort(A, i);
	Output(Subvec(A, 0, N));
	cout << A[N] << endl;
	return 0;
}