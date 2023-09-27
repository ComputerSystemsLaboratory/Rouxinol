//#define _USE_MATH_DEFINES // for C++
//#include <cmath>
#include <stdio.h>
#include <vector>

using namespace std;

int out_put(vector<int> A){

	int N;
	N = A.size();

	printf("%d", A[0]);
	for (int i = 1; i < N; i++){
		printf(" %d", A[i]);
	}
	printf("\n");

	return 0;
}

int main(){
	
	int N, a, v, j;
	vector <int> A;

	scanf("%d", &N);

	for (int i = 0; i < N; i++){
		scanf("%d", &a);
		A.push_back(a);
	}
	out_put(A);

	for (int i = 1; i < N; i++){
		v = A[i];
		j = i - 1;
		while (j >= 0 && A[j] > v){
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = v;
		out_put(A);
	}

	return 0;
}