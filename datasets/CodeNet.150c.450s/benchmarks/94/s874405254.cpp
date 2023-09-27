#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
	int N;
	int A[100];
	
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d", &A[i]);
	}
	
	bool flag = true;
	int tmp;
	int count = 0;
	while(flag){
		flag = false;
		for(int i = N -1; i >= 1; i--){
			if(A[i] < A[i-1]){
				tmp = A[i];
				A[i] = A[i-1];
				A[i-1] = tmp;
				flag = true;
				count++;
			}
		}
	}
	
	for(int i = 0; i < N; i++){
		printf("%d", A[i]);
		if(i != N-1) putchar(' ');
	}
	putchar('\n');
	printf("%d\n", count);
	
	return 0;
}