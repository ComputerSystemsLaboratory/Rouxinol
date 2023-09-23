#include <stdio.h>
int main()
{
int x,t;
scanf("%d",&x);
for(int i=2;i<=x;i++)
{
	if(i%3==0)printf(" %d",i);
	else {
		t=i;
		while(1){
		if(t%10==3){printf(" %d",i);break;}
		t=t/10;
		if(t==0)break;
		}
	}


	

}
printf("\n");
return 0;
}