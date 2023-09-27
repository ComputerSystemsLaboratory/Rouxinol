#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(void)
{
	int i=0,count=0;
	char W[11],T[1001];
	scanf("%s",W);
	while(1)
	{
		W[i]=tolower(W[i]);
		if(W[i]=='\0'){break;}
		i++;
	}
	while(1)
	{
		scanf("%s",T);
		if(strstr(T,"END_OF_TEXT")){break;}
		i=0;
	    while(1)
	    {
	    	T[i]=tolower(T[i]);
	        if(T[i]=='\0')break;
	        i++;
	    }
		if(!strcmp(T,W)){count++;}
	}
	printf("%d\n",count);

	return 0;
}