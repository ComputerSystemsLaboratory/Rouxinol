#include<bits/stdc++.h>
using namespace std;
int n;
string s;
map <string,int> m;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		m[s]++;
	}
	printf("AC x %d\n",m["AC"]);
	printf("WA x %d\n",m["WA"]);
	printf("TLE x %d\n",m["TLE"]);
	printf("RE x %d\n",m["RE"]);
	return 0;
}