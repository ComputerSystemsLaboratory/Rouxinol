#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a,ll b){
	return a%b?gcd(b,a%b):b;
}
int main(){
	ll a,b;
	while(cin>>a>>b)
		cout<<gcd(max(a,b),min(a,b))<<" "<<a*b/gcd(max(a,b),min(a,b))<<endl;
	return 0;
}