#include<stdio.h>
#include<string.h>
int main(void)
{
	char sm[1024][1024];
	int c,q;
	for(c=0;;c++){
		char s[256],sc[256];

		int m,h[128];
		scanf("%s",s);
		if(strcmp(s,"-")==0){
			break;
		}
		scanf("%d",&m);
		for(int i=0;i<m;i++){
			scanf("%d",&h[i]);
		}
		q=m;
		strcpy(sc,s);
		for(int p=0;p<q;p++){
			for(int r=0;r<h[p];r++){
				sc[strlen(s)-1]=s[0];
				for(int j=0;j<strlen(s)-1;j++){
					sc[j]=s[j+1];
				}
				strcpy(s,sc);
			}

		}
		strcpy(sm[c],sc);
	}
	for(int i=0;i<c;i++){
		printf("%s\n",sm[i]);
	}
    return 0;
}