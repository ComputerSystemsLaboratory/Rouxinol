#include<stdio.h>
int main(void)
{
    int n,i,j,x;
	scanf("%d",&n);
    i=100000;
	for(j=0;j<n;j++){
	    i=i*5/100+i;
		x=i%1000;
		if(x!=0){
		    x=1000-x;
			i=i+x;
		}
	}
	printf("%d\n",i);
	return 0;
}