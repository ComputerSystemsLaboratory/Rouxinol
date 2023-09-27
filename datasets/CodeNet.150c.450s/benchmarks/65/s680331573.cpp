#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> Change(vector<int> X, int m, int n){
	int x = X[m];
	X[m] = X[n];
	X[n] = x;
	return X;
}

vector<int> SelectionSort_withMark(vector<int> A, int i){
	int N = A.size() / 2;
	int j_0 = i;
	for(int j = i; j < N; j++){
		if(A[2*j+1] < A[2*j_0 +1]) j_0 = j;
	}
	if(j_0 != i){
		A = Change(A, 2*j_0 +1, 2*i+1);
		A = Change(A, 2*j_0, 2*i);
	}
	return A;
}

vector<int> BubbleSort_withMark(vector<int> A, int i){
	int N = A.size() / 2;
	int j = 0;
	for(int j = 0; j < N-i; j++){
		if(A[2*j+1] > A[2*j+3]){
			A = Change(A, 2*j+1, 2*j+3);
			A = Change(A, 2*j, 2*j+2);
		}
	}
	return A;
}

int MarkToNumber(char m){
	if(m == 'C') return 1;
	if(m == 'D') return 2;
	if(m == 'H') return 3;
	if(m == 'S') return 4;
}

char NumberToMark(int n){
	if(n == 1) return 'C';
	if(n == 2) return 'D';
	if(n == 3) return 'H';
	if(n == 4) return 'S';
}

void Output_withMark(vector<int> X){
	int N = X.size() / 2;
	for(int i = 0; i < N-1; i++){
		char m = NumberToMark(X[2*i]);
		cout << m << X[2*i+1] << ' ';
	}
	cout << NumberToMark(X[2*N-2]) << X[2*N-1] << endl;
}

vector<int> Arrange(vector<int> X){
	int N = X.size() / 2;
	vector<int> P;
	for(int i = 1; i <= 9; i++){
		for(int j = 0; j < N; j++){
			if(X[2*j+1] == i){
				P.push_back(X[2*j]);
				P.push_back(i);
			}
		}
	}
	return P;
}

void Answer(vector<int> X, vector<int> P){
	vector<int> Q = Arrange(X);
	if(Q == P) cout << "Stable" << endl;
	if(Q != P) cout << "Not stable" << endl;
}


int main(){
	int N;
	cin >> N;
	vector<int> A;
	for(int i = 0; i < N; i++){
		char m;
		int  n;
		cin >> m >> n;
		int l = MarkToNumber(m);
		A.push_back(l);
		A.push_back(n);
	}
	vector<int> P = Arrange(A);
	vector<int> B = A;
	for(int i = 1; i < N; i++) A = BubbleSort_withMark(A, i);
	Output_withMark(A);
	Answer(A, P);
	for(int i = 0; i < N; i++) B = SelectionSort_withMark(B, i);
	Output_withMark(B);
	Answer(B, P);
	return 0;
}