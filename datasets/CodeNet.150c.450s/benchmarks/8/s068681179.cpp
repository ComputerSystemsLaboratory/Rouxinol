#include <stdio.h>
#include <math.h>
#include <string.h>
#define rep(i,a,n) for(int i=a;i<n;i++)

int main(){
	int n,a=0,b=0;
	char s[110],t[110];
	scanf("%d",&n);
	rep(i,0,n){
		scanf("%s %s",s,t);
		if(strcmp(s,t)>0) a+=3;
		else if(strcmp(s,t)<0) b+=3;
		else{
			a++; b++;
		}
	}
	printf("%d %d\n",a,b);
	return 0;
}