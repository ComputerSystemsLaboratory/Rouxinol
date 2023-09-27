#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>


int year(int a,int b,int c)
{
	int day=0;
	int i;
	for(i=1;i<a;i++){
		if(i%3==0){day+=+200;}
		else{day+=195;}
	}
	for(i=1;i<b;i++){
		if(a%3!=0){
			if(i%2==0){day+=19;}
			else{day+=20;}
		}else{day+=20;}
	}
	for(i=1;i<=c;i++){day++;}
	return day;
}

int main()
{
	int n;
	int a,b,c;
	int i;

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		printf("%d\n",year(1000,1,1)-year(a,b,c));
	}

	return 0;
}