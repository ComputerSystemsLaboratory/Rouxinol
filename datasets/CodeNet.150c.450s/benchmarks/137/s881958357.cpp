#include<cstdio>
#include<cstring>
using namespace std;

#define M 1046527
#define L 14

char H[M][L];

int getNum(char c)
{
	if(c=='A')return 0;
	else if(c=='T')return 1;
	else if(c=='G')return 2;
	else return 3;
}
int getKey(char str[])
{
	int sum=0,p=1;
	for(int i=0;i<strlen(str);i++)
	{
		sum+=p*getNum(str[i]);
		p*=4;
	}
	return sum;
}

int h1(int key){return key%M;}
int h2(int key){return 1+key%(M-1);}
int h(int key,int i){return (h1(key)+i*h2(key))%M;}

int find(char str[])
{
	int key=getKey(str);
	long long i,h;
	for(i=0;;i++)
	{
		h=(h1(key)+i*h2(key))%M;
		if(strcmp(H[h],str)==0)return 1;
		else if(strlen(H[h])==0)return 0;
	}
}

int insert(char str[])
{
	int key=getKey(str);
	long long i,h;
	for(i=0;;i++)
	{
		h=(h1(key)+i*h2(key))%M;
		if(strcmp(H[h],str)==0)return 1;
		else if(strlen(H[h])==0)
		{
			strcpy(H[h],str);
			return 0;
		}
	}
}

int main()
{
	int n;scanf("%d",&n);
	char str[L],com[8];
	for(int i=0;i<M;i++)
	{
		H[i][0]=0;
	}
	for(int i=0;i<n;i++)
	{
		scanf("%s %s",com,str);
		if(com[0]=='i')insert(str);
		else
		{
			if(find(str)==1)printf("yes\n");
			else printf("no\n");
		}
	}
	return 0;
}