#include<stdio.h>
#include<map>
int main()
{
	int n;
	char s[8];
	while(scanf("%d",&n),n)
	{
		std::map<char,char>m;
		fgets(s,8,stdin);
		while(n--) fgets(s,8,stdin),m[s[0]]=s[2];
		scanf("%d",&n);
		while(n--) scanf("%s",s),putchar(m.find(s[0])==m.end()?s[0]:m[s[0]]);
		puts("");
	}
	return 0;
}