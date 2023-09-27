#include<bits/stdc++.h>
using namespace std;
string s;
int a,b,c,d;
int main()
{
	int n;cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		if(s=="AC")
		{
			a++;
		}
		else if(s=="TLE")
		{
			c++;
		}
		else if(s=="WA")
		{
			b++;
		}
		else d++;
	}
	printf("AC x %d\n",a);
	printf("WA x %d\n",b);
	printf("TLE x %d\n",c);
	printf("RE x %d\n",d);
}