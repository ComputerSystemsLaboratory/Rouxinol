#include<bits/stdc++.h>
#include<iomanip>
#define fast {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define mxn 300007
#define ar array
#define mod 1000000007
#define ld long double
#define pb push_back
#define ar array
#define fi first
#define se second
typedef long long int ll;
using namespace std;
int main(void){
	fast;
	ll n,i,k;
	cin>>n>>k;
	ll a[n],p,pr;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=k;i<n;i++){
		pr=a[i];
		p=a[i-k];
		if(pr>p)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
		p=pr;
	}
}
