#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<algorithm>
#define mod 1000000007
#define ll long long
using namespace std;

int main() {
	int a, b;	
		scanf("%d%d", &a, &b);
		ll c = a, d = 1;
		while (b != 1) {
			if (b & 1)d = c*d%mod;
			c = c*c%mod;
			b /= 2;
		}
		printf("%lld\n", c*d%mod);	
}