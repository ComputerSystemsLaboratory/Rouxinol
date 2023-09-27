#include<stdio.h>
int main(void)
{
	int x1,x2,x3,x4,y1,y2,y3,y4,s,t;
	scanf("%d %d %d %d %d %d %d %d",&x1,&x2,&x3,&x4,&y1,&y2,&y3,&y4);
	s=x1+x2+x3+x4;
	t=y1+y2+y3+y4;
	if(s>t){
		printf("%d\n",s);
	}
	else if(s<t){
		printf("%d\n",t);
	}
	else if(s==t){
		printf("%d\n",t);
	}
	return 0;
}
