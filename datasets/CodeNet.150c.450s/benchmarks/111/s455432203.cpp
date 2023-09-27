#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef double db;
ll dp[101][21];
ll a[101],n;
int main()
{
	scanf("%lld",&n);
	for(ll i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	dp[0][a[0]]=1;
	for(ll i=1;i<n-1;i++){
		for(ll j=0;j<=20;j++){
			if(dp[i-1][j]){
				if(j+a[i]<=20){
					dp[i][j+a[i]]+=dp[i-1][j];
				}
				if(j-a[i]>=0){
					dp[i][j-a[i]]+=dp[i-1][j];
				}
			}
		}
	}
	printf("%lld\n",dp[n-2][a[n-1]]);
}