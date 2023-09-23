#include <bits/stdc++.h>

using namespace std;

long long kpk(long long n, long long m){
	long long a,b;
	a=n;
	b=m;
	while(a!=b&&b!=a){
		while(a<b){
			a+=n;
		}
		while(b<a){
			b+=m;
		}
	}
	return b;
}

long long fpb(long long n, long long m){	
	long long r;
	if (n<m){
		swap(n,m);
	}
	r=n%m;
	while(r>0){
		n=m;
		m=r;
		r=n%m;
	}
	return m;
	}
	
int main(){
	long long a,b;
	while(cin>>a>>b){
		cout<<fpb(a,b)<<' '<<kpk(a,b)<<endl;
	}
}
