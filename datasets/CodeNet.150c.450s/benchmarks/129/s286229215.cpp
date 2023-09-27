#include<stdio.h>
int main(void){
	int n[100][100],r,c,i,j,t[100],v[100],b=0;
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&n[i][j]);
			t[i]+=n[i][j];
			v[j]+=n[i][j];
			b+=n[i][j];
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",n[i][j]);
		}
		printf("%d\n",t[i]);
	}
	for(i=0;i<=c;i++){
		if(i!=c){
			printf("%d ",v[i]);
		}else{
			printf("%d\n",b);
		}
	}
	return 0;
}