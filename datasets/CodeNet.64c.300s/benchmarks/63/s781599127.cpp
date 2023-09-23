//先辗转相除找gcd再通过gcd求lcm
#include <bits/stdc++.h>

using namespace std;

long long a,b;

long long gcd(long long a,long long b)
{
	if(b==0) return a;
	else return gcd(b,a%b);
}

int main()
{
	while(scanf("%lld%lld",&a,&b)!=EOF)
	{
		long long yin=gcd(a,b);
		long long ax=a/yin,bx=b/yin;
		printf("%lld %lld\n",yin,ax*bx*yin);
	}
	return 0;
} 
