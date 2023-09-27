#include <stdio.h>
int main( ){
  int x,y,i;
  for(i=1;i>0;i++)
    {
      scanf("%d%d",&x,&y);
      if(x>y){
	printf("%d %d\n",y,x);
      }
      if(x<y){
	printf("%d %d\n",x,y);
      }
      if(x==y){
	if(x!=0){
	  printf("%d %d\n",x,y);
	}
	if(x==0){
	  break;
	}
      }
    }
  return 0;
}