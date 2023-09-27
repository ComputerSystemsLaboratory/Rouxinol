#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int N;
	int A[100];
	int count = 0;
	
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d", &A[i]);
	}
	
	int minj, tmp;
	for(int i = 0; i < N; i++){
		minj = i;
		for(int j = i; j < N; j++){
			if(A[j] < A[minj]){
				minj = j;
				
			}
		}
		if(i != minj){
			tmp = A[i];
			A[i] = A[minj];
			A[minj] = tmp;
			count++;
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