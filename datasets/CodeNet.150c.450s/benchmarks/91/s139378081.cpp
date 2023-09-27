#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
using namespace std;

#define rep(i,n) for(int i=2; i<=n; i++)
#define rep2(i,n) for(int i=0; i<n; i++)
bool isprime(int n){
	rep(i,sqrt(n)){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int n, ans;
	bool table[1000000];
	rep2(i,1000000) table[i]=true;
	rep(i,1000000){
		if(table[i] && isprime(i)){
			rep(j,999999/i) table[i*j]=false;
		}
	}
	while(cin >> n){
		ans=0;
		rep(i,n) if(table[i]) ans++;
		cout << ans << endl;
	}
    return 0;
}