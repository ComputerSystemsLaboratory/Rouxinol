#include<iostream>
#include<algorithm>
#include<map>
#include<string>
#include<queue>
#include<stack>
#include<vector>
#include<list>
using namespace std;

int frequency = 0;
bool flag = false;


void selectionSort(int A[], int N){
	for (int i = 0; i<N-1 ; i++){
		int minj = i;
		flag = false;
		for (int j = i; j < N; j++){
			if (A[j] < A[minj]){
				minj = j;
				flag = true;
			}
		}
		if (flag) {
			swap(A[i], A[minj]);
			frequency++;
		}
	}
}

int main(){

	int N;

	int A[100];

	cin >> N;
	
	for (int i = 0; i < N; i++) cin >> A[i];

	selectionSort(A, N);

	for (int i = 0; i < N; i++) {
		if (i<N - 1) cout << A[i] << " ";
		else cout << A[i] << endl;
	}
	cout << frequency << endl;

	return 0;
}