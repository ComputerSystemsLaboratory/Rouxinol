#include<iostream>

using namespace std;

const long long mod=1000000007LL;

long long powmod(long long m,long long n){
	long long res=1;
	while(n>0){
		if(n&1)(res*=m)%=mod;
		n>>=1;
		(m*=m)%=mod;
	}
	return res;
}

int main()
{
    long long m,n;
    cin>>m>>n;
    cout<<powmod(m,n)<<endl;
}