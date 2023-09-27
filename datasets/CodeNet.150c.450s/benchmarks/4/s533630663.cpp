#include<stdio.h>
int main()
{
	int m,f,r;
	for(int i=1;;i++)
	{
		scanf("%d %d %d",&m,&f,&r);
		if(m==-1&&f==-1&&r==-1) break;
		else if(m==-1||f==-1) printf("F\n"); 
		else if(m+f>=80) printf("A\n"); 
		else if(m+f<80&&m+f>=65) printf("B\n"); 
		else if((m+f<65&&m+f>=50)||(m+f<50&&m+f>=30&&r>=50) ) printf("C\n"); 
		else if(m+f<50&&m+f>=30) printf("D\n"); 
		else if(m+f<30) printf("F\n"); 
	}
	return 0;
}