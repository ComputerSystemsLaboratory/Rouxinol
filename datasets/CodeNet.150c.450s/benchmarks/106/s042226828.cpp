#include<stdio.h>
int main(void)
{
	int a,b,c,x,z,y;
	y=0;
	scanf("%d %d %d",&a,&b,&c);
	for(x=a;x<=b;x++) {
		z=c%x;
		if(z==0){
			if(z<=b){
				y++;
			}
		}
	}
	printf("%d\n",y);
	return 0;
}