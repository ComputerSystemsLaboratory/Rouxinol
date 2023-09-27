
#include <bits/stdc++.h>
using namespace std;


#define M 1000000007
#define pb push_back
#define mp make_pair
#define s second
#define f first
#define mod 998244353
#define sz(v) (int)(v).size()

#define pii pair<int, int>
#define vi vector<int>
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)

ll add(ll a,ll b)
{
	a%=M;
	b%=M;
	ll p = (a+b)%M;
	return (p+M)%M;
}

ll mul(ll a,ll b)
{
	a%=M;
	b%=M;
	ll p = (a*b)%M;
	return (p+M)%M;
}

const int NBITS = 60;

ll basis[NBITS]; 

ll sz; 

void insertVector(ll mask)
{
	for (ll i = 0; i < NBITS; i++)
	{
		if ((mask & 1LL << i) == 0) continue; 
		if (!basis[i]) 
		{ 
			basis[i] = mask;
			++sz;
			return;
		}

		mask ^= basis[i];
	}
}

int main()
{
	fastio;
	ll t;
	cin>>t;
	while(t--)
	{
		memset(basis,0,sizeof(basis));
		sz=0;
		ll n,a[1000],i;
		cin>>n;
		for(i=0;i<n;i++)
			cin>>a[i];
		string str;
		cin>>str;
		ll ans=0;
		for(i=n-1;i>=0;i--)
		{
			ll cur = sz;
			insertVector(a[i]);
			if((sz>cur)&&(str[i]=='1'))
			{
				ans=1;
				break;
			}
		}
		cout<<ans<<endl;
	}
    return 0;
}



