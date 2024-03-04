#include<stdio.h>
int main(){
  int f,N[10],j,maxj,a,h;
 
  /*N[a]Ã£ÂÂ«Ã¥ÂÂ¤Ã£ÂÂÃ¤Â»Â£Ã¥ÂÂ¥*/

 for(a=0;a<10;a++)
   {
    scanf("%d",&N[a]);
   }

 /*Ã¤Â¸Â¦Ã£ÂÂ³Ã¦ÂÂ¿Ã£ÂÂÃ£ÂÂ*/

  for(f=0;f<10;f++)
    {
      maxj=f;

      for(j=f;j<10;j++)
	{

	if(N[maxj]<N[j])
	  {

	  maxj=j;
	}
      }
    /*N[a]Ã£ÂÂN[maxj]Ã£ÂÂ«*/

      h=N[f];
    N[f]=N[maxj];
    N[maxj]=h;

  }

  /*Ã¤Â¸ÂÃ¤Â½ÂÃ¯Â¼ÂÃ£ÂÂ¤Ã£ÂÂÃ¥ÂÂºÃ¥ÂÂ*/

    printf("%d\n%d\n%d\n",N[0],N[1],N[2]);
  return 0;
}