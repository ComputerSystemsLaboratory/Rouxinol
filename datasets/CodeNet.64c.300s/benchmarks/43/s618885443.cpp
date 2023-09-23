#include<stdio.h>

int max(int,int);

int main(){
	int a=0;
	int S=0,T=0;
	int i=0;
	for(i=0;i<4;i++){
		scanf("%d",&a);
		S=S+a;
	}
	for(i=0;i<4;i++){
		scanf("%d",&a);
		T=T+a;
	}

	a=max(S,T);
	printf("%d\n",a);

	return 0;
}


int max(int a,int b){
	if(a<b){
		return b;
	}else{
		return a;
	}
}