#pragma warning (disable:4996)
#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<string>
#include<queue>
#include<set>
#include<map>
#include<stack>
#include<cstdlib>
#include<functional>
#define ll long long
using namespace std;
int gcd(int a, int b)//最大公约数
{
	if (b == 0)
		return a;
	return gcd(b, a%b);
}

int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		ll d=gcd(a,b);
		printf("%lld %lld\n",d,a/d*b);
	}
	return 0;
}
