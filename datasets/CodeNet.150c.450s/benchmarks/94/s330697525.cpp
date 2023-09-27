#include<iostream>

using namespace std;

int main(){
	int N, flag = 1, temp, sw = 0;
	cin >> N;
	int A[N];
	for(int i = 0; i < N; i++)
		cin >> A[i] ;

	while(flag){
		flag = 0;
		for(int j = N - 1; j > 0 ; j--){
			if(A[j] < A[j - 1]){
				temp = A[j];
				A[j] = A[j - 1];
				A[j - 1] = temp;
				flag = 1;
				sw++;
			}
		}
	}

	for(int i = 0; i < N; i++){
		if(i > 0)
			cout << " ";
		cout << A[i];
	}
	cout << endl << sw << endl;
	return 0;
}