#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
#include<stdio.h>
#include<cctype>
#include<algorithm>
#include<string.h>
#include<iomanip>
using namespace std;
int main()
{
	string a,b,c;
	while(cin>>a>>b)
	{
		c=a+a;
		for(int i=0;i<a.size();i++)
			if(b==c.substr(i,b.size()))
				{
					cout<<"Yes"<<endl;
					goto EXIT;
			}
			cout<<"No"<<endl;
EXIT:;

			return 0;
	}

}