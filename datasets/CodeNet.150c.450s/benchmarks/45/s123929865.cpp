#include<iostream>
using namespace std;

long power_surp(long, long, long);

int main()
{
	int m;
	long n;
	long surp; //surplus
	long a=1000000007;

	cin>>m>>n;

	surp=power_surp(m,n,a);

	cout<<surp<<endl;
	return 0;
}

long power_surp(long x, long n, long a)
{
	long tmp=1;

	if(n>0) tmp=power_surp(x*x%a, n/2, a);
	if(n%2==1) tmp=tmp*x%a;

	return tmp;
}