#include<stdio.h>
int main(void){
int f,a,c,i,t,A[100][100],b[100];
	f=0;
	c=0;
	scanf("%d %d",&a,&c);
	for(i=0;i<a;i++){
		for(t=0;t<c;t++){
			scanf("%d",&A[i][t]);
		}
	}
	for(t=0;t<c;t++){
		scanf("%d",&b[t]);
	}
	for(i=0;i<a;i++){
		f=0;
		for(t=0;t<c;t++){
			f+=A[i][t]*b[t];
		}
		printf("%d\n",f);
	}
	return 0;
}