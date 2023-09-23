#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int a;
	long long int c;
	while(cin>>a)
	{
		c=a;
		while(a!=1)c*=--a;
		cout<<c<<endl;
	}
	return 0;
}