#include<iostream>
#include<vector>
using namespace std;

void BubbleSort(vector<int> &A, int &count)
{
	bool flag = true;
	while(flag){
		flag = false;
		for(int j = A.size() - 1; j >= 1; j--){
			if(A[j] < A[j-1]){
				swap(A[j], A[j-1]);
				flag = true;
				count++;
			}
		}
	}
}

void Output(vector<int> A)
{
	int n = A.size() - 1;
	for(int i = 0; i < n; i++) cout << A[i] << ' ';
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