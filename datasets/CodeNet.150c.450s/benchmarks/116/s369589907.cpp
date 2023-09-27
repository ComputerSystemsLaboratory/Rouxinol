#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <complex>
#include <string>
#include <sstream>
#include <algorithm>
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
#define EQ(a,b) (abs((a)-(b))<EPS)
ll num[100100];
int main()
{
	while(1)
	{
		int n,k;
		cin >> n >> k;
		if(n==0&&k==0)break;
		memset(num,0,sizeof(num));
		for(int i=1;i<=n;i++)
		{
			int p;
			cin >> p;
			num[i]=p;
		}
		for(int i=2;i<=n;i++)
		{
			num[i]+=num[i-1];
		}
		ll ans=-INF;
		for(int i=1;i<=n-k+1;i++)
		{
			ans=max(ans,num[i+k-1]-num[i-1]);
		}
		cout << ans << endl;
	}
	return 0;
}