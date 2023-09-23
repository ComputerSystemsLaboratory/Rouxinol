#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<string.h>
#include<functional>
#include<queue>
#include<stack>
#include<math.h>
#define INF 999999
#define EPS 1.0e-6

using namespace std;

typedef long long ll;

int m, n;

ll power(ll a, ll b)
{
	if (b == 1)return a%1000000007;
	else {
		ll k = (a*a)%1000000007;
		if (b % 2 == 0)return power(k, b / 2);
		else return (a*power(a%1000000007, b-1))%1000000007;
	}

}

int main()
{
	cin >> m >> n;
	ll ans = power(m, n);

	cout << ans << endl;
	
	return 0;
}