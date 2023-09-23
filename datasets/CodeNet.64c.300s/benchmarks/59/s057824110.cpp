#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int x)
{
	if(x<2)
		return false;
    if(x==2)
		return true;
	if(x%2==0)
	    return false;
	for(int i=3;i<=sqrt(x);i+=2)
		if(x%i==0)
			return false;
	return true;
}
int main()
{
	int n;
	cin>>n;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		if(isPrime(t))
			sum++;
	}
	cout<<sum<<endl;
}
