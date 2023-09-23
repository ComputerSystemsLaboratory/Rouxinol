#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull a, b;
ull gcd(ull a, ull b){
	return b?gcd(b, a%b):a;
} 
int main(){
	//freopen("in", "r", stdin);
	for(;cin>>a>>b;){
		ull _gcd=gcd(a, b), _lcm=a/_gcd*b;
		cout<<_gcd<<' '<<_lcm<<endl;
	}
}