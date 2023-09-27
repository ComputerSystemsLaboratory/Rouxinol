#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <stack>
#include <queue>
#include <list>
#include <stdio.h>
#include <algorithm>
#define MAX 100000
using namespace std;
typedef long long ll;
ll w[100001],n,k;
ll maxmum(ll mid)
{
	ll i,j=0,sum=0;
	for(i=0;i<k;i++)
	{
		ll tmp=mid;
		while(j<n){
			tmp-=w[j];
			if(tmp>=0){
				j++;
				sum++;
				if(sum==n) return sum;
			}else{
				break;
			}
		}
	}
	return sum;
}//can't get real value of packages that could be uploaded before reaching the minimal value of p;
ll bin()
{
	ll left=0,right=100000*10000;
	ll mid;
	while(left<right){
		mid=(left+right)/2;
		if(maxmum(mid)>=n) right=mid;
		else left=mid+1;
	}
	return right;
}
int main(int argc, char *argv[]) {
	ll ans;
	scanf("%lld %lld",&n,&k);
	for(ll i=0;i<n;i++)
	{
		scanf("%lld",&w[i]);
	}
	ans=bin();
	printf("%lld\n",ans);
	return 0;
}
