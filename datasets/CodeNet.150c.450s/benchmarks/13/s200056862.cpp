#include<stdio.h>
#include<string.h>
int main(void)
{
	int a,f,k,i,j,z=0;
	char s[1000],d[1000],h[1000];
	scanf("%s",s);
	a=strlen(s);
	scanf("%s",d);
	f=strlen(d);
	strcpy(h,s);
	strcat(s,h);
	k=strlen(s);
	/*for(i=0;i<=k;i++)
		printf("%c",s[i]);*/
	for(i=0;i<=k;i++){
		for(j=0;j<=f;j++){
			if(s[j+i]!=d[j])
				break;
		}
		//printf("j = %d %c %c\n",j,s[j+i-1],s[j+i]);
		if(j==f){
			z=1;
			break;
		}
	}
	if(z==1)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}