#include <stdio.h>
#include <math.h>
#include <string.h>
#define rep(i,a,n) for(int i=a;i<n;i++)

int main(){
	int lens,lenp;
	char s[210],p[110];
	int f=0;
	scanf("%s %s",s,p);
	lens=strlen(s);
	lenp=strlen(p);
	sprintf(s,"%s%s",s,s);
	rep(i,0,lens){
		rep(j,0,lenp){
			if(s[i+j]!=p[j]) break;
			if(j==lenp-1) f=1;
		}
		if(f) break;
	}
	if(f) printf("Yes\n");
	else printf("No\n");
	return 0;
}