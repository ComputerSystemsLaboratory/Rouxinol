#include <iostream>
#include <vector>
#include<string>
using namespace std;


int main(){
	int N,v,j;
	cin >> N;

	vector <int> A(N, 0);

	for (int i = 0; i < N; i++){
		cin >> A[i];
	}//????´???°N??????????????????????????£???

	for (int i = 0; i < N ; i++){
	
		v = A[i];//A[N-2]
		j = i - 1;//j=N-3

		while (j >= 0 && A[j]>v){
		
			A[j + 1] = A[j];//A[N-2]=A[N-3]
			j -- ;
			A[j + 1] = v;
		}

		for (int k = 0; k < N; k++){
			cout << A[k];
			if (k != N - 1)cout << " ";
		}cout << endl;

	
	}



	return 0;
}