#include<iostream>
using namespace std;
int main()
{	
	long int i,n,a;
	while(cin>>n)
	{
	a=1;
	for(i=n;i>=1;i--)
	{
	a=a*i;	
	}
    cout<<a<<endl;
}
	return 0;
}