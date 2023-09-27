#include<stdio.h>
int main(void)
{
	int i,j,w[31],a,d;
	
	for(a=0;a<=30;a++){
		w[a]=0;
	}
	for(i=0;i<28;i++){
		scanf("%d",&j);
		w[j]=1;
	}
	for(d=1;d<=30;d++){
		if(w[d]==0){
			printf("%d\n",d);
		}
	}
	return 0;
}