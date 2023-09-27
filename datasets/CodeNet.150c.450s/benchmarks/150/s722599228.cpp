#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define k 10000
int n, C[k];

int main(){
	scanf("%d", &n);
	int *A = (int *)malloc(sizeof(int)*n);
	int *B = (int *)malloc(sizeof(int)*n);
	
	for(int i = 0;i < n;i++)scanf("%d", &A[i]);
	
	for(int i = 0;i < k;i++)C[i] = 0;
	for(int i = 0;i < n;i++)C[A[i]]++;
	for(int i = 1;i < k;i++)C[i] += C[i - 1];
	for(int i = n - 1;i >= 0;i--){
		B[C[A[i]] - 1] = A[i];
		C[A[i]]--;
	}
	
	for(int i = 0;i < n - 1;i++)printf("%d ", B[i]);
	printf("%d\n", B[n - 1]);
	return 0;
}