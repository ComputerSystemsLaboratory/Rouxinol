#include <stdio.h>
#include <math.h>
#include <string.h>
#define rep(i,a,n) for(int i=a;i<n;i++)

int main(){
	int m,h,len;
	while(1){
		char s[210],t[210]="";
		scanf("%s",s);
		if(strcmp(s,"-")==0) break;
		len=strlen(s);
		scanf("%d",&m);
		rep(i,0,m){
			scanf("%d",&h);
			rep(j,0,h){
				t[j+len-h]=s[j];
			}
			rep(j,h,len){
				t[j-h]=s[j];
			}
			sprintf(s,"%s",t);
		}
		printf("%s\n",s);
	}
	return 0;
}