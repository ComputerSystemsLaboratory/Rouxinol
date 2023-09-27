#include<stdio.h>
#include<string.h>
int main()
{
	int n,a[]={0,5,3,3,3,3,3,4,3,4};
	char*p,*q,s[1028],*t[]={"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	scanf("%d",&n);
	while(n--)
	{
		memset(s,0,1028);
		scanf("%s",s);
		for(p=s;*p;)
		{
			q=strpbrk(p,"0\0");
			if(*p-'0')putchar(t[*p-'0'][(q-p-1)%a[*p-'0']]);
			p=q+1;
		}
		puts("");
	}
	return 0;
}