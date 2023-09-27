#include<bits/stdc++.h>
using namespace std;
const int MAXN_O=10,MAXN_S=15;
char o[MAXN_O],s[MAXN_S];
map<string,string> d;
int main()
{
	//input
	int N_line;
	cin>>N_line;
	while(N_line--)
	{
		//aligorithm
		cin>>o;
		cin>>s;
		if(o[0]=='i')    d[s]="whatever";
		else if(o[0]=='f')
		{
			if(d.count(s))	cout<<"yes\n";
			else	cout<<"no\n";
		}
	}
	return 0;
}
