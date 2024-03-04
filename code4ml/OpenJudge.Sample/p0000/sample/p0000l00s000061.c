#include <stdio.h>

void swap(int *i,int *j){
	int k;
	k=*i;
	*i=*j;
	*j=k;
}

int main (){
	int i,x=0,y=0,z=0,u;
	for(i=0;i<10;i++){
		scanf("%d",&u);
		if(u>x)swap(&x,&u);
		if(u>y)swap(&y,&u);
		if(u>z)swap(&z,&u);
	}
	printf("%d\n%d\n%d\n",x,y,z);
	return 0;
}