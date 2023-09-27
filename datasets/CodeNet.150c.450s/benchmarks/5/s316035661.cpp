#include <iostream>
using namespace std;

int main()
{
	int n,a[101],i;
	cin>>n;
	for(i=1;i<=n;i++) 
	{
		cin>>a[i];
	}
	i = n;
	for(;i>1;i--)
	{
		cout<<a[i]<<" ";
	}
	cout<<a[1]<<endl;
	return 0;
 } 
