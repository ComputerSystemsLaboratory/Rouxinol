#include<iostream>
#include<vector>
#include<map>
using namespace std;

int sw = 0;

void print(int A[], int N)
{
	for (int i = 0; i < N; i++){
		cout << A[i];
		if (i != N - 1)
			cout << " ";
	}
	cout << endl;
}

void sort(int A[], int N)
{
	int flag = 1;
	while (flag == 1){
		flag = 0;
		for (int j = N - 1; j > 0; j--){
			if (A[j] < A[j - 1]){
				swap(A[j], A[j - 1]);
				sw++;
				flag = 1;
			}
		}
	}
}

int main()
{
	int A[100], N;
	
	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> A[i];
	}
	sort(A, N);
	print(A, N);
	cout <<  sw << endl;

	return 0;
}