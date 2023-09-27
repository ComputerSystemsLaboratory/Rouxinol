#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i,a,b,g=0,m=0;
	for(i=0;i<4;i++)
	{
		cin>>a;
		g+=a;
	}
	for(i=0;i<4;i++)
	{
		cin>>b;
		m+=b;
	}
	if(m>g)
		cout<<m<<endl;
	else
		cout<<g<<endl;
	return 0;
}
	