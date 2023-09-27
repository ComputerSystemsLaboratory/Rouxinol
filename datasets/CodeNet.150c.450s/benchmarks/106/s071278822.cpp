#include<iostream>
using namespace std;
int main()
{
	int a,b,c,i,p=0,m;
	cin>>a>>b>>c;
	for(i=a;i<=b;i++)
	{
	m=c%i;
	if(m==0)
	{
		p++;
	}
	}
	cout<<p<<endl;
	return 0;
}