#include<iostream>
#include<cstdio>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else 
		return gcd(b,a%b);
}
int main()
{
	long long a,b;
	while(cin>>a>>b)
	{
		long long i;
		if(a<b)
			swap(a,b);
		i=gcd(a,b);
		long long t=a*b/i;
		cout<<i<<" "<<t<<endl;
	}
	return 0;
}
