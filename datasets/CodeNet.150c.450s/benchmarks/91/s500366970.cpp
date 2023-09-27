//AOJ 0009 Prime Number
//2016.6.25
//Algorithm:Prime
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

const int maxn=1000006;
bool prime[maxn];
int n;
int cnt[maxn];

int main()
{
	for(int i=1;i<maxn;i++)
		prime[i]=true;
	prime[1]=false;
	for(int i=2;i<maxn;i++)
		if(prime[i])
			for(int j=i*2;j<maxn;j+=i)
				prime[j]=false;
	for(int i=1;i<maxn;i++)
		cnt[i]=cnt[i-1]+prime[i];
	while(cin>>n)
	{
		cout<<cnt[n]<<endl;
	}
	return 0;
}