#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
ll GCD(ll a,ll b){
	if(b==0)return a;
	return GCD(b,a%b);
}
int main(){
	ll a,b;
	while(cin>>a>>b){
		ll gcd=GCD(a,b);
		cout<<gcd<<" "<<a*b/gcd<<endl;
	}
	return 0;
}