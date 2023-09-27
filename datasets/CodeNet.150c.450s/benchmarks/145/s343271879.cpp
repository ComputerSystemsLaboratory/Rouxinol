 #include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<map>
#define inf 0x3fffffff
#define M 10000
using namespace std;

char str[40];
map<string,int>ss;
int main()
{
	char ans[40],ans2[40];
	char a;
	int maxi,l_maxi;
	while(scanf("%s",str)!=EOF)
	{
		a = getchar();
		maxi = l_maxi = 0;
		ss.clear();
		while(scanf("%s",str))
		{
			a = getchar();
			ss[str]++;
			if(ss[str] > maxi)
			{
				maxi = ss[str];
				strcpy(ans,str);
		//		cout<<ans<<endl;
			}
			if(strlen(str) > l_maxi)
			{
				l_maxi = strlen(str);
				strcpy(ans2,str);
			}
			if(a == '\n')
			{
				cout<<ans<<" "<<ans2<<endl;
			  	break;	
				
			}
		}
	}
	return 0;
}