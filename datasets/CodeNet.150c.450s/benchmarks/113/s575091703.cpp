#include <stdio.h>
int main(){
  int i,x;
  for(i=1;i>0;i++)
    {
      scanf("%d",&x);
	if(x!=0){      
	printf("Case %d: %d\n",i,x);
	}
      else{
	break;
      }
    }
    return 0;
}