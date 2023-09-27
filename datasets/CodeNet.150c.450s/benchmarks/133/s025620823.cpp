#include<iostream>
#include<cmath>
#include<vector>
#include<climits>
#include<algorithm>
#include<numeric>
#include<iomanip>
#include<map>
#include<set>
#include<random>
#include<cassert>
using namespace std;
#define ll long long int
#define ld long double
ll CaseN=1;

ll tst()
{
   ll ans=0;  
        
    
       
   return ans;
}


void solve()
{
ll d;
cin>>d;
vector<ll> c(27,0);
vector<ll> l(27,0);
for(ll i=1;i<=26;i++)
{
cin>>c[i];	
}
vector<vector<ll> > p(d+1,vector<ll>(27,0) );
for(ll i=1;i<=d;i++)
{
for(ll j=1;j<=26;j++)
{
	cin>>p[i][j];
}		
}
vector<ll> t(d+1) ;
for(ll i=1;i<=d;i++)
{
cin>>t[i];	
}
vector<ll> sat(d+1,0);
// t[i];
ll s=0; // satis
for(ll i=1;i<=d;i++)
{
	// t[i] help
	l[t[i]]=i;
	// p // satis
	ll m =0;
	for(ll j=1;j<=26;j++)
	{
		m+= (c[j]*(i-l[j]));
	}
	
	s += (p[i][t[i]] - m);
	//cout<<m<<" "<<p[i][t[i]]<<" "<<s<<endl;
	sat[i]= s;	
	
}


for(ll i=1;i<=d;i++)
{
cout<<sat[i]<<endl;	
}

//cerr<<"Case #"<<CaseN<<": ";
    CaseN++;
	
return ;
}



signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1;
	//cin>>t;
	while(t--)
	{
	
	solve();
	}
}
