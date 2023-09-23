#include<stdio.h>
#include<math.h>

int selectionSort(int A[100], int n)
{
	int c, i, j, m, minj; // ????????£??\????´?????????¨??????

	for(i=0; i < n; i++){
		minj=i;
		for(j = i; j < n; j++){ 
			if(A[j] < A[minj]){
				minj = j;
			}
		}
		if (minj != i){
		m = A[i];
		 	A[i] = A[minj];
		 	A[minj]=m;
			A[n+1]++;
		}
	}
	c = A[n+1];
	return c;
}

int main (void)
{
	int n, A[100]={0}, i, c;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &A[i]);
	}
	
	c = selectionSort(A,n);
	
	for(i=0; i<n; i++){
		printf("%d", A[i]);
		if(i != n-1) printf(" ");
		if(i == n-1) printf("\n");
	}
	
	printf("%d\n", c);
	
  return 0;
}