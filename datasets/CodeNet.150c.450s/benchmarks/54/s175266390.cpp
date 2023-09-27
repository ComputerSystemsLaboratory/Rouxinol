#include <stdio.h>
#include <math.h>
#include <string.h>
#define rep(i,a,n) for(int i=a;i<n;i++)

char change(char c){
	char r=c;
	if('A'<=c && c<='Z') r+='a'-'A';
	return r;
}

int main(){
	int ans=0,lenw,lens;
	char w[11],s[1010];
	scanf("%s",w);
	lenw=strlen(w);
	rep(i,0,lenw){
		w[i]=change(w[i]);
	}
	while(1){
		scanf("%s",s);
		if(strcmp(s,"END_OF_TEXT")==0) break;
		lens=strlen(s);
		rep(i,0,lens){
			s[i]=change(s[i]);
		}
		if(strcmp(s,w)==0) ans++;
	}
	printf("%d\n",ans);
	return 0;
}