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

void bubbleSort(int A[],int N){
	bool flag = true;
	int i = 0;
	while (flag){
		flag = false;
		for (int j = N - 1; j >= i+1; j--){
			if (A[j] < A[j - 1]){
				swap(A[j], A[j - 1]);
				flag = true;
				frequency++;
			}
		}
		i++;
	}
}


int main(){
	int N;

	int A[100];

	cin >> N;

	for (int i = 0; i < N; i++) cin >> A[i];
	
	bubbleSort(A, N);

	for (int i = 0; i < N; i++){
		if (i<N-1) cout << A[i] << " ";
		else cout << A[i] << endl;
	}
	cout << frequency << endl;

	return 0;
}