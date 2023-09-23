#include<stdio.h>
#include<math.h>
int main(void)
{
	int n,a,s,w,i,x,c;
	while(scanf("%d %d",&n,&a)!=EOF)  {
//		c=0;
		w=n+a;	
		for(i=0;w!=0;i++){		
			w=w/10;
//			c++;	
		}
		printf("%d\n",i);
	}
	return 0;
}