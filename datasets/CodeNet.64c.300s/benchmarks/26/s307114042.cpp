#include <iostream>
using namespace std;

const long long mod=1000000007;

long long mod_pow(long long x, long long n){
	if(n==0) return 1;
	long long res=mod_pow(x*x%mod, n/2);
	if(n%2==1)res=res*x%mod;
	return res;
}

int main() {
	long long int m, n;
	cin>>m>>n;
	cout<<mod_pow(m, n)%mod<<endl;
	return 0;
}