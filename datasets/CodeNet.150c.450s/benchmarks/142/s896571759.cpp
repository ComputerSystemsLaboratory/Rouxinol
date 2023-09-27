using namespace std;
#include<bits/stdc++.h>
#define Ranger159 ios_base::sync_with_stdio(false);
#define PrintLater cin.tie(0);cout.tie(0);
#define ll long long
#define phb push_back
#define break break
#define pob pop_back()
#define continue continue
#define size size
#define insrt insert
#define fir first
#define true true
#define clear clear
#define vL vector<ll> 
#define resize resize
#define sec second
#define else else
#define reverse reverse
#define lbr1 cout<<"\n";
#define lbr2 cout<<"\n\n";
#define cin(v,n) for(ll i=0;i<n;i++) cin>>v[i];
#define cout(v,n) for(ll i=0;i<n;i++) cout<<v[i]<<" "; lbr1
const ll mod=1e9+7;

int main(int argc, char const *argv[])
{
	Ranger159
	// PrintLater
	ll test=1,n,a,b,c,k,i;
	// cin>>test;
	while(test--)
	{
		cin>>n>>k;
		vL v(n); cin(v,n);
		
		for(i=k;i<n;i++)
		{
			if(v[i]>v[i-k])
				cout<<"Yes";
			else cout<<"No";
			lbr1;
		}
		// lbr1
	}
	return 0;
}