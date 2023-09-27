#include<cstdio>
#include<cstring>
#include<functional>
#include<algorithm>
using namespace std;
int main(void)
{
	char s[1001],ss[1001][1001];
	int len,max,x,i,cnt[1001],mx;
	max=-1;
	mx=-1;
	x=0;
	while(scanf("%s ",s)!=EOF) {
		len=strlen(s);
		if(max<len) max=len;
		strcpy(ss[x],s);
		for(i=0;i<x;i++) {
			if(strcmp(ss[i],s)==0) cnt[i]++;
			if(mx<cnt[i]) mx=cnt[i];
		}
		x++;
	}
	for(i=0;i<x;i++) {
		if(mx==cnt[i]) {
			printf("%s ",ss[i]);
			break;
		}
	}
	for(i=0;i<x;i++) {
		if(max==strlen(ss[i])) {
			printf("%s\n",ss[i]);
			break;
		}
	}
	return 0;
}
		