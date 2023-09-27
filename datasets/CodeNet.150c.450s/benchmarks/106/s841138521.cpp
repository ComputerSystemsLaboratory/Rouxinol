#include <stdio.h>

int	 main(void)
{
	int	a,b,c;
	int	i;
	
	scanf("%d%d%d",&a,&b,&c);

	for(i=0; a<=b; a++){
	  if((c%a)==0)
	    i++;
	}
	
	printf("%d\n",i);

	return(0);
}