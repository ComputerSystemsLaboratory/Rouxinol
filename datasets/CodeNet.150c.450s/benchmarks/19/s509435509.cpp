#include<stdio.h>
int main()
{
		int x,y;
		scanf("%d %d",&x,&y);
			while(1){
				if(x==0 && y==0) break;
				if(x>y){
						printf("%d %d\n",y,x);
						}
				else {
						printf("%d %d\n",x,y);
					}
				scanf("%d %d",&x,&y);
			}
		return 0;
}
