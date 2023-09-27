#include<bits/stdc++.h>
#define N 1000005
using namespace std;

int n,m;
string s[100005];
int t1,t2,t3,t4;

inline int qr()
{
	int x=0,w=1;char a=0;
	while(a<'0'||a>'9'){if(a=='-')w=-1;a=getchar();}
	while(a<='9'&&a>='0'){x=(x<<3)+(x<<1)+(a^48);a=getchar();}
	return x*w;
}

int main()
{
	n=qr();
	for(register int i=1;i<=n;i++)
		cin>>s[i];
	for(register int i=1;i<=n;i++)
	{
		if(s[i][0]=='A')
			t1++;
		if(s[i][0]=='W')
			t2++;
		if(s[i][0]=='T')
			t3++;
		if(s[i][0]=='R')
			t4++;
	}
	printf("AC x %d\n",t1);
	printf("WA x %d\n",t2);
	printf("TLE x %d\n",t3);
	printf("RE x %d\n",t4);
	return 0;
} 