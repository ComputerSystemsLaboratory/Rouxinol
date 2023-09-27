#include "bits/stdc++.h"
using namespace std;

//template
typedef long long int ll;
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<n;i++)
#define repr(i,n) for(ll i=n;i>0;i--)
#define all(v) v.begin(),v.end()
#define in cin>>
#define out cout<<
#define en <<endl
const ll INF = 10000000000000;

int main()
{
	ll a, b, c;
	in a >> b >> c;
	if (a < b && b < c)
	{
		out "Yes" en;
	}
	else
		out "No" en;
}

