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
	ll N;
	cin>>N;
	string S[100000];
	ll ans[100000];
	rep(i,N)cin>>S[i];
	rep(i,N){
		set<string> A;
		A.insert(S[i]);
		ll n=S[i].size();
		reg(j,1,n-1){
			string a=S[i].substr(0,j), b=S[i].substr(j);
			string c=a, d=b;
			reverse(a.begin(),a.end());
			reverse(b.begin(),b.end());
			A.insert(a+b);
			A.insert(a+d);
			A.insert(c+b);
			A.insert(b+a);
			A.insert(d+a);
			A.insert(b+c);
			A.insert(d+c);
		}
		ans[i]=A.size();
	}
	rep(i,N)cout<<ans[i]<<endl;

	return 0;
}