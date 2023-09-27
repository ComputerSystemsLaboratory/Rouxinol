#include <stdio.h>
#include <string.h>

int main(void)
{
	//int i;
	char s[100];
	char p[100];
	char sp[200];

	/*for(i = 0; i < 100; i++)
	{
		s[i] = '\0';
		p[i] = '\0';
	}
	
	for(i = 0; i < 200; i++)
	{
		sp[i] = '\0';
	}*/
	
	scanf("%s", s);
	scanf("%s", p);
    strcat(sp, s);
	strcat(sp, s);
	
	if(strstr(sp, p))
	{
	    printf("Yes\n");
	}
	else
	{
	    printf("No\n");
	}
}