#include<iostream>
using namespace std;
int a[1000000],i;
int p(int k)
{
	return k/2;
}
int l(int k)
{
	return k*2;
}
int r(int k)
{
	return k*2+1;
}
int main()
{
	int n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		cout<<"node "<<i<<": key = "<<a[i]<<", ";
		if(p(i)>=1)
		{
			cout<<"parent key = "<<a[p(i)]<<", ";
		}
		if(l(i)<=n)
		{
			cout<<"left key = "<<a[l(i)]<<", ";
		}
		if(r(i)<=n)
		{
			cout<<"right key = "<<a[r(i)]<<", ";
		}
		cout<<endl;
	}
	return 0;
}