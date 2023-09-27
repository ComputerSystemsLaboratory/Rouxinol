// 2015/04/20 Tazoe

#include <iostream>
#include <algorithm>
using namespace std;

int C;

void selectionSort(int A[], int N)
{
	for(int i=0; i<=N-1; i++){
		int minj = i;

		for(int j=i; j<=N-1; j++){
			if(A[j]<A[minj]){
				minj = j;
			}
		}

		if(i!=minj){
			swap(A[i], A[minj]);
			C++;
		}
	}
}

int main()
{
	int N;
	cin >> N;

	int A[100];
	for(int i=0; i<N; i++){
		cin >> A[i];
	}

	C = 0;

	selectionSort(A, N);

	for(int i=0; i<N; i++){
		cout << A[i];

		if(i<N-1){
			cout << ' ';
		}
		else{
			cout << endl;
		}
	}
	cout << C << endl;

	return 0;
}