#include <stdio.h>

int	 main(void)
{
	int	a,b,c;

	scanf("%d%d%d",&a,&b,&c);

	if(a<b){
		if(b<c)
			puts("Yes");
		else
			puts("No");
	}
	else
		puts("No");

	return(0);
}