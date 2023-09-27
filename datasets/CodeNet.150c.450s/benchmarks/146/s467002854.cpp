#include<iostream>
using namespace std;
int main()
{
	long double x1,y1,x2,y2,x3,y3,x4,y4;
	int n;
	cin>>n;
	int N[100];
for(int i=0;i<n;i++)
{
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	if((y1-y2)/(x1-x2)==(y3-y4)/(x3-x4))
	{
	N[i]=1;
	}
	else
	{
	N[i]=0;
	}
}
for(int j=0;j<n;j++)
{
	if(N[j]==1)
	{
		cout<<"YES"<<endl;
	}
	else if(N[j]==0)
	{
		cout<<"NO"<<endl;
	}
}
return 0;
}