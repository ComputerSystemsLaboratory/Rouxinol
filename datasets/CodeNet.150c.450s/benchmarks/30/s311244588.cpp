#include<iostream>

using namespace std;

int main(){
	int N; cin >> N;
	int A[100];
	for (int i= 0; i < N; i++){
		cin >> A[i];
	}
	int count = 0;
	for (int i = 0; i < N; i++){
		int min = A[i];
		int minj = i;
		bool flag = false;
		for ( int j = i+1; j < N; j++){
			if ( min > A[j]){
				min = A[j];
				minj = j;
				flag = true;
			}
		}
		if (flag){
			count++;
		}
		
		int tmp = A[i];
		A[i] = A[minj];
		A[minj] = tmp;
	}

	for ( int i = 0; i < N; i++){
		cout << A[i];
		if ( i != N-1){
			cout << " ";
		}
	}
	cout << endl;
	cout << count << endl;


return 0;
}