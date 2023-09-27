#include <bits/stdc++.h>
#include <math.h>

using namespace std;

template<typename T>
bool chmax(T &a,const T &b);
template<typename T>
bool chmin(T &a,const T &b);
long long modpow(long long n,long long p,long long mod);

long long inf=1000000007;

int main(){
	long long m,n;
	cin>>m>>n;
	cout<<modpow(m,n,inf)<<endl;

	return 0;
}

long long modpow(long long n,long long p,long long mod){
	if(p==0) return 1;
	if(p%2==0){
		long long a=modpow(n,p/2,mod);
		return a*a%mod;
	}
	if(p%2==1) return (modpow(n,p-1,mod)*n)%mod;
	cerr<<"ERROR"<<endl;
	return 1;
}

template<typename T>
bool chmax(T &a,const T &b){
	if(a<b){
		a=b;
		return 1;
	}
	return 0;
}

template<typename T>
bool chmin(T &a,const T &b){
	if(a>b){
		a=b;
		return 1;
	}
	return 0;
}

