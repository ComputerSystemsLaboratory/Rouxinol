#include <stdio.h>

#define N 1000000
int n;
int S[N];

int partition(int n){
	int x = S[n];
	int i,p=0;
	int tmp;
	int j;
	for(i = 0;i < n;i++){
		//printf("%d\n",i);
		if(S[i] <= x){
			tmp  = S[i];
			S[i] = S[p];
			S[p] = tmp;
			p++;
		}
		/*
		for(j=0;j<n+1;j++){
			printf("%d ",S[j]);
		}
		printf("\n");
		printf("p = %d\n",p);*/
	}
	tmp = S[p] ;
	S[p] = S[n];
	S[n] = tmp;
	return p;
}

int main(){
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&S[i]);
	}
	int m = partition(n-1);
	for(i = 0;i< n;i++){
		if(m == i){
			printf("[%d] ",S[i]);
		}
		else if(i == n-1)printf("%d\n",S[i]);
		else printf("%d ",S[i]);
	}
	return 0;
}