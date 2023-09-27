#include<stdio.h>
int main(void)
{
	int n[1000],z,w;
	w=0;
	while(scanf("%d",&z)!=EOF){
		w++;
		if(z!=0){
			n[w]=z;
		}
		else if(z==0){
			printf("%d\n",n[w-1]);
			w-=2;
		}
	}
	return 0;
}