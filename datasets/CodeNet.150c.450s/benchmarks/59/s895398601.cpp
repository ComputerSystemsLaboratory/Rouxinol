#include<iostream>
#include<vector>
using namespace std;

vector<int> InsertSort(vector<int> A, int i){
	int v = A[i];
	int j = i - 1;
	while(j >= 0 && A[j] > v){
		A[j+1] = A[j];
		j--;
	}
	A[j+1] = v;
	return A;
}

void Output(vector<int> A){
	int N = A.size();
	for(int i = 0; i < N-1; i++) cout << A[i] << ' ';
	cout << A[N-1] << endl;
}

int main(){
	int N;
	cin >> N;
	vector<int> A;
	A.resize(N);
	for(int i = 0; i < N; i++) cin >> A[i];
	for(int i = 0; i < N; i++){
		A = InsertSort(A, i);
		Output(A);
	}
	return 0;
}