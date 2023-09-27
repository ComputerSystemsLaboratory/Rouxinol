#include <stdio.h>
#include <math.h>
#include <string.h>
#define rep(i,a,n) for(int i=a;i<n;i++)

int main(){
	int len;
	char s[1010];
	while(1){
		int ans=0;
		scanf("%s",s);
		len=strlen(s);
		if(len==1 && s[0]=='0') break;
		rep(i,0,len){
			ans+=s[i]-'0';
		}
		printf("%d\n",ans);
	}
	return 0;
}