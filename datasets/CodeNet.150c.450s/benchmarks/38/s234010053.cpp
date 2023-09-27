#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int i,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int a[3];
		cin>>a[0]>>a[1]>>a[2];
		sort(a,a+3);
		if(a[2]*a[2] == a[0]*a[0] + a[1]*a[1])
		{
			cout<<"YES"<<endl;
		} else				
			cout<<"NO"<<endl;
	}
	return 0;
}