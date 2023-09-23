#include <stdio.h>

int max(int a,int b);

int main(void){

	int r,c;
	int i,j;
	
	scanf("%d",&r);
	scanf("%d",&c);
	
	int a[r][c];
	int rtot[r];
	int ctot[c];
	int tot=0;
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++){
		rtot[i]=0;
		for(j=0;j<c;j++){
			rtot[i]+=a[i][j];
		}
	}
	
	for(j=0;j<c;j++){
		ctot[j]=0;
		for(i=0;i<r;i++){
			ctot[j]+=a[i][j];
		}
	}
	
	for(i=0;i<r;i++){
		tot+=rtot[i];
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("%d\n",rtot[i]);
	}
	
	for(j=0;j<c;j++){
			printf("%d ",ctot[j]);
	}
	
	printf("%d\n",tot);
	
	return 0;
}

int max(int a,int b){
	if(a>=b){
		return a;
	}else{
		return b;
	}
}