#include <bits/stdc++.h>
#include <math.h>

using namespace std;

long long inf=1000000007;

long long modpow(long long n,long long p,long long mod);

int main(){
	long long n;
	cin>>n;
	cout<<n<<":";

	for(long long i=2;i*i<=n;i++){
		while(n%i==0){
			cout<<" "<<i;
			n/=i;
		}
	}
	if(n!=1) cout<<" "<<n;

	cout<<endl;

	return 0;
}

long long modpow(long long n,long long p,long long mod){
	if(p==0) return 1;
	if(p%2==0) return (modpow(n,p/2,mod)*modpow(n,p/2,mod))%mod;
	if(p%2==1) return (modpow(n,p-1,mod)*n)%mod;
	cerr<<"ERROR"<<endl;
	return 1;
}

