#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int main()
{
	ll a,b,sum;
	while (scanf("%lld %lld",&a, &b)!=EOF){
		ll c=0;
		sum=a+b;
		while(sum!=0){
			sum=sum/10;
			c++;
		}
		printf("%lld\n",c);	
	}
	return 0;
}