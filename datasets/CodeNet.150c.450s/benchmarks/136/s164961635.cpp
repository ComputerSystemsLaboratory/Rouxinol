#include <iostream>
using namespace std;
typedef long long ll;
ll gcd(ll m, ll n){
	while(m!=n)m>n?m-=n:n-=m;
	return m;
}
int main(){
	ll a,b;
	while(cin>>a>>b)cout<<gcd(a,b)<<' '<<a/gcd(a,b)*b<<endl;
}