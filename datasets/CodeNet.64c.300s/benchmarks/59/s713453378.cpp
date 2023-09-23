#include<cstdio>
#include<cstdlib> 
#include<cmath>
#include<iostream>
using namespace std;

bool isPrime(int n)
{
	for(int i=2;i<sqrt(n)+0.5;++i)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int n, temp, ans = 0;;
	cin >> n;
	while(n--)
	{
		cin >> temp;
		if(isPrime(temp))
		{
			++ans;
		}
	}
	printf("%d\n", ans);
	return 0;
}