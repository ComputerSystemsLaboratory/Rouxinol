#include<stdio.h>
int main(void)
{
	int a,s,d,f,g,h,i,j;
	while(1){
		scanf("%d %d %d",&a,&s,&d);
		if(a==-1&&s==-1&&d==-1)	break;
		if(a==-1||s==-1)
			printf("F\n");
		else if(a+s>=80)
			printf("A\n");
		else if(a+s>=65)
			printf("B\n");
		else if(a+s>=50||d>=50)
			printf("C\n");
		else if(a+s>=30)
			printf("D\n");
		else
			printf("F\n");
	}
	return 0;
}