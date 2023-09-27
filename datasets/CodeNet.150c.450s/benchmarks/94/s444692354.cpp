#include<iostream>
#include<vector>
using namespace std;

vector<int> BubbleSort(vector<int> A, int &count){
	int flag = 1;
	while(flag){
		flag = 0;
		for(int j = A.size() - 1; j >= 1; j--){
			if(A[j] < A[j-1]){
				swap(A[j], A[j-1]);
				flag = 1;
				count++;
			}
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
	A.resize(N);
	for(int i = 0; i < N; i++) cin >> A[i];
	int count = 0;
	A = BubbleSort(A, count);
	Output(A);
	cout << count << endl;
	return 0;
}