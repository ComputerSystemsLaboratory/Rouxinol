#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
#include<climits>
#include<string>
#include<set>
#include<numeric>
#include<map>
#include<iostream>
using namespace std;
#define rep(i,n) for(int i = 0;i<((int)(n));i++)
#define reg(i,a,b) for(int i = ((int)(a));i<=((int)(b));i++)
#define irep(i,n) for(int i = ((int)(n)-1);i>=0;i--)
#define ireg(i,a,b) for(int i = ((int)(b));i>=((int)(a));i--)
typedef long long ll;
typedef pair<ll, ll> mp;

ll M=1000000007;

ll power(ll m,ll n){
	ll tmp=1;
	if(n>0){
		if(n%2==0){
			tmp=(power(m,n/2)*power(m,n/2))%M;
		}else{
			tmp=(power(m,n-1)*m)%M;
		}
	}
	return tmp;
}

int main(void){
	ll m,n;
	cin>>m>>n;
	cout<<power(m,n)<<endl;
	return 0;
}