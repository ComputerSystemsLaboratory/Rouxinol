
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
 
int main(void)
{
  int i,j,k,l;
  while(1) {
	int x,y,z;
	int e;
	int tmp_ans,ans;
	scanf("%d",&e);
	if(e == 0) break;
	tmp_ans = e;
	for(z=0;z*z*z <= e;z++) {
	  for(y=0;;y++) {
		x = e - z*z*z - y*y;
		if(0 > x) break;
		if(tmp_ans > x+y+z)
		  tmp_ans = x+y+z;
	  }
	}
	ans = tmp_ans;
	printf("%d\n",ans);
  }
   return 0;
}