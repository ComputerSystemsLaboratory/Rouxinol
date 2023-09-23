// 2015/04/20 Tazoe

#include <iostream>
#include <algorithm>
using namespace std;

int C;

void bubbleSort(int A[], int N)
{
	bool flag = true;

	while(flag){
		flag = false;

		for(int j=N-1; j>=1; j--){
			if(A[j]<A[j-1]){
				swap(A[j], A[j-1]);
				C++;
				flag = true;
			}
		}
	}

	return;
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

	bubbleSort(A, N);

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