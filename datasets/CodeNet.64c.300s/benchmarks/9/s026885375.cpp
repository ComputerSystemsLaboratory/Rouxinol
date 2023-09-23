#include<stdio.h>
int main(void)
{
	int n,i,w=100000;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		w=w*1.05;
		if(w%1000>0){
			w=w-(w%1000)+1000;
		}
	}
	printf("%d\n",w);
	return 0;
}	