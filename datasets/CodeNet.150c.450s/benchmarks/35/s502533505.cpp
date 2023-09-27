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

int main(void){
	ll ans[10000];
	ll N=0;
	while(true){
		int n;
		cin>>n;
		if(n==0)break;
		ll a[5000];
		rep(i,n){
			cin>>a[i];
		}
		ll max=LLONG_MIN;//?????????0????????????????????§????????£???
		ll current;
		rep(i,n){
			current=0;
			reg(j,i,n-1){
				current+=a[j];
				if(current>max)max=current;
			}
		}
		ans[N]=max;
		N++;
	}
	rep(i,N)cout<<ans[i]<<endl;
	return 0;
}