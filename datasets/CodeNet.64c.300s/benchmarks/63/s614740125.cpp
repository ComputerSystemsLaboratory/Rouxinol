#include <iostream>
using namespace std;
typedef long long ll;
ll gcd(ll m, ll n){
	while(m!=n)m>n?m-=n:n-=m;
  		//if (m>n) m = m - n;
  		//else n = n - m;
	return m;
}
ll lcm(ll m,ll n){return ((m/gcd(m, n))*n);}
int main(){
	ll a,b;
	while(cin>>a>>b)cout<<gcd(a,b)<<' '<<lcm(a,b)<<endl;
}