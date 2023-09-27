#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char H[1046527][14];
int getchar(char ch)
{
	if(ch=='A') return 1;
	if(ch=='C') return 2;
	if(ch=='G') return 3;
	if(ch=='T') return 4;
	else return 0;
}
long long getkey(char str[])
{
	long long num=0,p=1,i;
	for(i=0;i<strlen(str);i++)
	{
		num+=p*(getchar(str[i]));
		p*=5;
	}
	return num;
}
int h1(int key){return key%1046527;}
int h2(int key){return 1+(key%(1046527-1));}
int find(char str[])
{
	long long key,i,h;
	key=getkey(str);
	for(i=0;;i++)
	{
		h=(h1(key)+i*h2(key))%1046527;
		if(strcmp(H[h],str)==0) return 1;
		else if(strlen(H[h])==0) return 0;
	}
	return 0;
}
int insert(char str[])
{
	long long key,i,h;
	key=getkey(str);
	for(i=0;;i++)
	{
		h=(h1(key)+i*h2(key))%1046527;
		if(strcmp(H[h],str)==0) return 1;
		else if(strlen(H[h])==0)
		{
			strcpy(H[h],str);
			return 0;
		}
	}
	return 0;
}
int main()
{
	int i,n,h;
	char str[14],com[9];
	for(i=0;i<1046527;i++)
	{
		H[i][0]='\0';
	}
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %s",com,str);
		if(com[0]=='i')
		{
			insert(str);
		}else
		{
			if(find(str))
			printf("yes\n");
			else{
				printf("no\n");
			}
		}
	}
	return 0;
}