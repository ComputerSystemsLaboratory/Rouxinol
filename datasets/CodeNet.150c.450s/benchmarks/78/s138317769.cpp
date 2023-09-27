#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <complex>
#include <string>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-9
#define INF 2000000000
#define sz(x) ((int)(x).size())
#define fi first
#define sec second
#define SORT(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
#define EQ(a,b) (abs((a)-(b))<eps)
vector<int> pol;
vector<int> pol_odd;
int dp1[1000100],dp2[1000100];
int main()
{
	for(int i=0;i<=1000000;i++)dp1[i]=dp2[i]=INF;
	dp1[0]=dp2[0]=0;
	for(int i=1;;i++)
	{
		int k=i*(i+1)*(i+2)/6;
		if(k>1000000)break;
		pol.pb(k);
		if(k%2)pol_odd.pb(k);
	}
	for(int i=0;i<=1000000;i++)
	{
		for(int j=0;j<pol.size();j++)
		{
			if(i<pol[j])break;
			dp1[i]=min(dp1[i],dp1[i-pol[j]]+1);
		}
	}
	for(int i=0;i<=1000000;i++)
	{
		for(int j=0;j<pol_odd.size();j++)
		{
			if(i<pol_odd[j])break;
			dp2[i]=min(dp2[i],dp2[i-pol_odd[j]]+1);
		}
	}
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n==0)break;
		printf("%d %d\n",dp1[n],dp2[n]);
	}
	return 0;
}