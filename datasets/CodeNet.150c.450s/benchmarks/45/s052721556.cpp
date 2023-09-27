#include <iostream>
using namespace std;
typedef long long int ll;
const ll mod=1000000007;

ll p(ll m,ll n)
{
	if(n==1)return m%mod;
	if(n%2)return ((p((m*m)%mod,n/2)%mod)*m)%mod;
	else return p((m*m)%mod,n/2)%mod;
}

int main() {
	ll m,n;cin>>m>>n;cout<<p(m%mod,n)%mod<<endl;
	return 0;
}