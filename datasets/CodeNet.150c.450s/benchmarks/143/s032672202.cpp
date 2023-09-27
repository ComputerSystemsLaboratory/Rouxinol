#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
int main()
{
	ll n;

	cin>>n;

	map<ll,ll>mp;

    ll ara[n+1];

    ll sum=0;

	for(ll i=0;i<n;i++ )
    {
		cin>>ara[i];

		sum+=ara[i];

		mp[ara[i]]++;
	}




	ll q;

	cin>>q;

	ll sz=mp.size();

	while(q--)
    {
		ll b,c,nsz=0,i;

		cin>>b>>c;

		sum-=mp[b]*b;

		sum+=(c*mp[b]);

       mp[c]+=mp[b];

        mp[b]=0;
        
		cout <<sum<<endl;


	}





	return 0;
}



