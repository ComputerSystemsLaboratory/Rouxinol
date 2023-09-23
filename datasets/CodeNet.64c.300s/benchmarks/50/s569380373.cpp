#include <iostream>
#include <algorithm>
using namespace std;

void output(int *A,int N,int count){
	for(int i = 0; i < N; i++){
		if(i > 0) cout << " ";
		cout << A[i];
	}
	cout << endl;
	cout << count << endl;
}

int bubbleSort(int *A, int N){
	bool flag = 1;
	int count = 0;
	while(flag){
		flag = 0;
		for(int j = N - 1; j > 0; j--){
			if (A[j] < A[j-1]){
				int temp = A[j];
				A[j] = A[j-1];
				A[j-1] = temp;
				count++;
				flag = 1;
			}
		}
	}

	return count;
}

int main(){
	int N,A[101];
	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> A[i];
	}
	int count = bubbleSort(A,N);
	output(A,N,count);

	return 0;
}