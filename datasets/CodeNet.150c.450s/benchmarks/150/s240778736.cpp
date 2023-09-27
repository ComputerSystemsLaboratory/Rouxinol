#include <cstdio>
#include <cstdlib>
#define MAX 2000001
#define VMAX 10000

int A[MAX],B[MAX];
int C[VMAX+1];

int main(void){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&A[i+1]);
		C[A[i+1]]++;
	}
	for(int i=1;i<=VMAX;i++){
		C[i]=C[i]+C[i-1];
	}
	for(int j=1;j<=n;j++){
		B[C[A[j]]]=A[j];
		C[A[j]]--;
	}
	for(int i=1;i<=n;i++){
		printf("%d%c",B[i],i==n?'\n':' ');
	}
	return 0;
}