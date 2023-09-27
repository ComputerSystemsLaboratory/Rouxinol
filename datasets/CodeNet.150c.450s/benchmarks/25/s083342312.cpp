#include <stdio.h>
#include <math.h>
#include <string.h>
#define rep(i,a,n) for(int i=a;i<n;i++)

int main(){
	char c;
	int d[26]={0};
	while(scanf("%c",&c)!=EOF){
		//if(c=='0') break;
		if('a'<=c && c<='z') d[c-'a']++;
		else if('A'<=c && c<='Z') d[c-'A']++;
	}
	rep(i,0,26){
		printf("%c : %d\n",'a'+i,d[i]);
	}
	return 0;
}