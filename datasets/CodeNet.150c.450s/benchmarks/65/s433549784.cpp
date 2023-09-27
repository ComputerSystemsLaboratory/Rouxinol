#include<stdio.h>
#include <stdbool.h>
struct Card{
	char c;
	int a;
};

void bubble(struct Card A[],int N){
	for(int i=0;i<N-1;i++){
		for(int j=N-1;j>i;j--){
			if(A[j].a<A[j-1].a){
				Card t=A[j];
				A[j]=A[j-1];
				A[j-1]=t;
			}
		}
	}
}

void select(struct Card A[],int N){
	for(int i=0;i<N-1;i++){
		int k=i;
		for(int j=i+1;j<N;j++){
			if(A[j].a<A[k].a)	k=j;
		}
		if(k!=i){
			Card t=A[i];
			A[i]=A[k];
			A[k]=t;
		}
	}
}

bool stable(struct Card A[],struct Card B[],int N){
	for(int i=0;i<N;i++){
		if(A[i].c!=B[i].c) return false;
	}
	return true;
}

int main(){
	int i,n,j,k;
	Card c1[37],c2[37];
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		scanf("%c%d",&c1[i].c,&c1[i].a);
		getchar();
		c2[i]=c1[i];
	}
	bubble(c1,n);
	select(c2,n);
	for(i=0;i<n;i++){
		printf("%c%d",c1[i].c,c1[i].a);
		if(i!=n-1) printf(" ");
	}
	printf("\nStable\n");
	for(i=0;i<n;i++){
		printf("%c%d",c2[i].c,c2[i].a);
		if(i!=n-1) printf(" ");
	}
	printf("\n");
	if(stable(c1,c2,n)){
		printf("Stable\n");
	}
	else printf("Not stable\n");
}
