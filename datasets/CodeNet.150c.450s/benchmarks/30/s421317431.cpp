#include<iostream>
#include<vector>
using namespace std;

void BubbleSort(vector<int> &A, int &count)
{
	for(int i = 0; i < A.size(); i++){
		int minj = i;
		for(int j = i; j < A.size(); j++){
			if(A[j] < A[minj]){
				minj = j;
			}
		}
		if(minj != i){
			swap(A[i], A[minj]);
			count++;
		}
	}
}

void Output(vector<int> A)
{
	int n = A.size() - 1;
	for(int i = 0; i < n; i++){
		cout << A[i] << ' ';
	}
	cout << A[n] << endl;
}

vector<int> Input()
{
	int N;
	cin >> N;
	vector<int> A;
	A.resize(N);
	for(int i = 0; i < N; i++) cin >> A[i];
	return A;
}

int main()
{
	vector<int> A = Input();
	int count = 0;
	BubbleSort(A, count);
	Output(A);
	cout << count << endl;
	return 0;
}