#include <cstdio>

int n,a[100001];

int partition(int *A,int p, int r){
	int x = A[r];
	int i = p-1;
	for(int j = p; j < r; j++){
		if(A[j] <= x){
			i++;
			int tmp = A[i];
			A[i] = A[j];
			A[j] = tmp;
		}
	}
	int tmp2 = A[i+1];
	A[i+1] = A[r];
	A[r] = tmp2;
	return i+1;
}

int main(){
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	int x = partition(a,0,n-1);
	
	if(x == 0){
		printf("[%d]",a[0]);
	}
	else{
		printf("%d",a[0]);
	}
	for(int i = 1; i < n; i++){
		if(x == i){
			printf(" [%d]",a[i]);
		}
		else{
			printf(" %d",a[i]);
		}
	}
	printf("\n");
	return 0;
}


