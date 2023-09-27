#include<iostream>
#include<vector>
#include<map>
using namespace std;

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
	int v;
	for (int i = 1; i < N; i++){
		v = A[i];
		int j = i - 1;
		while (j >= 0 && A[j] > v){
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = v;
		print(A, N);
	}
}

int main()
{
	int A[100], N;
	
	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> A[i];
	}
	print(A, N);
	sort(A, N);

	return 0;
}