#include <stdio.h>
int main(void)
{
  int n,m,p,i,summ,sump,div;
  for(;;)
    {
      sump=0;
      scanf("%d %d %d",&n,&m,&p);
      if(m==0 && n ==0 && p==0){break;}
      int player[n];
      for(i=0;i<n;i++)
	{
	  scanf("%d",&player[i]);
	  sump=sump+player[i];
	}
      summ=sump*(100-p);
      if(player[m-1]==0){printf("%d\n",0);}
      else
	{
	div=summ/player[m-1];
	/*printf("sump=%d summ=%d div=%d\n",sump,summ,div);*/
	printf("%d\n",div);
	}
    }
  return 0;
}