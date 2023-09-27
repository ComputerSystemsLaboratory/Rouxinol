#define INF 48828125+100
#include<cstdio>
#include<cstring>

int pow[]={1,5,25,125,625,3125,15615,78125,390625,1953125,9765625};
bool hash[INF];

int HASH(char s[])
{
	int h(0);
	for(int i=strlen(s)-1;i>=0;--i)
	{
		if(s[i]=='A')
			h+=1*pow[i];
		if(s[i]=='C')
			h+=2*pow[i];
		if(s[i]=='G')
			h+=3*pow[i];
		if(s[i]=='T')
			h+=4*pow[i];
	}
	return h;
}
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;++i)
	{
		char oper[7],data[13];
		scanf("%s%s",oper,data);
		if(oper[0]=='i')
			hash[HASH(data)]=true;
		else
			hash[HASH(data)] ? printf("yes\n") : printf("no\n");
	}
	return 0;
}
			