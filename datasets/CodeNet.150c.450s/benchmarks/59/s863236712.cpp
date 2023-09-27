#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int A[N];
	for(int i = 0; i < N; i++){
		cin >> A[i];
	}

	int v, j;

	for(int m = 0; m < N; m++){
		if(m == N-1)
			cout << A[m] << endl;
		else
			cout << A[m] << " ";
	}

	for(int i = 1; i < N; i++){
		v = A[i];
		j = i - 1;
		while(j >= 0 && A[j] > v){
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = v;
		for(int m = 0; m < N; m++){
			if(m == N-1)
				cout << A[m] << endl;
			else
				cout << A[m] << " ";
		}
	}

}