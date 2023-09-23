#include<stdio.h>
int main(void)
{
	int zyo,suu,ri,ei;
	int zyo2,suu2,ri2,ei2;
	int s,t;
	s=0;
	t=0;
	
	scanf("%d %d %d %d",&zyo,&suu,&ri,&ei);
	scanf("%d %d %d %d",&zyo2,&suu2,&ri2,&ei2);
	s=zyo+suu+ri+ei;
	t=zyo2+suu2+ri2+ei2;
	if(s<=t){
		printf("%d\n",t);
	}
	else{
		printf("%d\n",s);
	}
	return 0;
}