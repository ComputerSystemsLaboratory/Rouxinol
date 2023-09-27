/* Square Route */

#include<cstdio>
#define MAX 1500000

int A[MAX], B[MAX], C[MAX], D[MAX];
				
void CountingSort(int A[], int B[]){
	int i;
	for(i = 1;i < MAX;i++)
		B[i] = 0;
	for(i = 0;i < MAX;i++)
		B[A[i]]++;
}

int main(void){
	for(;;){
		int N, M, i, j, k = 0, square = 0;
		scanf("%d %d", &N,&M);
		if(N == 0 && M == 0)
			return 0;
		else{
			int E[N], F[M];
			for(i = 0;i < N;i++)
				scanf("%d", &E[i]);
			for(i = 0;i < M;i++)
				scanf("%d", &F[i]);
			for(i = 0;i < N;i++){
				A[k] = E[i];
				k++;
				for(j = i + 1;j < N;j++){
					A[k] = A[k-1] + E[j];
					k++;
				}
			}
			for(i = k;i < MAX;i++)
				A[i] = 0;
			k = 0;
			for(i = 0;i < M;i++){
				C[k] = F[i];
				k++;
				for(j = i + 1;j < M;j++){
					C[k] = C[k-1] + F[j];
					k++;
				}
			}
			for(i = k;i < MAX;i++)
				C[i] = 0;
			CountingSort(A, B);
			CountingSort(C, D);
			for(i = 1;i < MAX;i++)
			square += B[i] * D[i];
			printf("%d\n", square);
		}
	}
}