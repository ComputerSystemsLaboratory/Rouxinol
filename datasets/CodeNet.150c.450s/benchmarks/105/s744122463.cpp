
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

ll basis[NBITS][2]; 

ll sz[2]={0}; 

void insertVector(ll mask, int no)
{
	for (ll i = 0; i < NBITS; i++)
	{
		if ((mask & 1LL << i) == 0) continue; 
		if (!basis[i][no]) 
		{ 
			basis[i][no] = mask;
			++sz[no];
			return;
		}

		mask ^= basis[i][no];
	}
}

ll checkBasis(ll mask, int no)
{
	for (ll i = 0; i < NBITS; i++)
	{
		if ((mask & 1LL << i) == 0) continue; 
		if (!basis[i][no]) 
		{ 
			// basis[i][no] = mask;
			// ++sz[no];
			return 1;
		}

		mask ^= basis[i][no];
	}
	return 0;
}

int main()
{
	fastio;
	ll t;
	cin>>t;
	while(t--)
	{
		
		ll n,a[1000],i,j,k;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			// insertVector(a[i]);
		}
		string str;
		cin>>str;	
		ll ans=0;
		// for(j=n-1;j>=0;j--)
		// {
		// 	ll fl=0;
		// 	insertVector(a[j],str[j]-'0');
		// 	if(str[j]=='1')
		// 		fl=checkBasis(a[j], 0);
		// 	if(fl)
		// 	{
		// 		ans=1;
		// 		break;
		// 	}
		// }
		// ll ans=0;
		for(i=0;i<n;i++)
		{
			if(str[i]=='1')
			{
				memset(basis,0,sizeof(basis));
				memset(sz,0,sizeof(sz));
				for(j=i+1;j<n;j++)
				{
					if(str[j]=='0')
						insertVector(a[j],0);
				}
				ans += checkBasis(a[i], 0);
			}
		}
		// for(ll j=0;j<2;j++)
		// {
		// 	for(i=0;i<5;i++)
		// 		cout<<basis[i][j]<<" ";
		// 	cout<<endl;
		// }
		ans = (ans>0);
		cout<<ans<<endl;
	}
    return 0;
}



