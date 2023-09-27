#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[100],sc[100],p[100];
	int sl,pl,f=0;
	scanf("%s",s);
	scanf("%s",p);
	strcpy(sc,s);
	sl=strlen(s);
	pl=strlen(p);
	for(int j=0;j<sl;j++){
		sc[0]=s[sl-1];
		for(int i=0;i<(sl-1);i++){
			sc[i+1]=s[i];
		}
		if(strncmp(sc,p,pl)==0){
			f=1;
			break;
		}
		strcpy(s,sc);
	}
	if(f==1){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	return 0;
}