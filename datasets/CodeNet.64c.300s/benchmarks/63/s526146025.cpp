#include<cstdio>
#include<cmath>
#include<string>
#include<iostream>
#include<algorithm>
#include<queue>
#include<string.h>
using namespace std;
inline long long gcd(long long  a,long long b)
{return b?gcd(b,a%b):a;}
inline long long lcm(long long a,long long b)
{return a/gcd(a,b)*b;}
long long x,y;
int main()
{
	while(~scanf("%lld %lld",&x,&y))
	{
		printf("%lld %lld\n",gcd(x,y),lcm(x,y));
	}
}

