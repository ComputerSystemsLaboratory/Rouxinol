#include<stdio.h>
int main(void)
{
	int jou,suu,ri,ei,s;
	int jou2,suu2,ri2,ei2,t;
	scanf("%d %d %d %d",&jou,&suu,&ri,&ei);
	scanf("%d %d %d %d",&jou2,&suu2,&ri2,&ei2);
	s=jou+suu+ri+ei;
	t=jou2+suu2+ri2+ei2;
		if(s<t){
			printf("%d\n",t);
		}
		else if(s==t){
			printf("%d\n",s);
		}
		else{
			printf("%d\n",s);
		}
	return 0;
}