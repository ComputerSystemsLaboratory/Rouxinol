#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,n) for(int i=1;i<n;i++)
#define rev(i,n) for(int i=n-1;i>=0;i--)
#define all(v) v.begin(),v.end()
#define P pair<int,int>
#define len(s) (int)s.size()
#define pb push_back

template<class T> inline bool chmin(T &a, T b){
	if(a>b){a=b;return true;}
	return false;
}
template<class T> inline bool chmax(T &a, T b){
	if(a<b){a=b;return true;}
	return false;
}
constexpr int mod = 1e9+7;
constexpr int inf = 3e18;


int N,A[205];
string S;
void solve(){
	cin>>N;
	rep(i,N)cin>>A[i];
	cin>>S;
	vector<int>v;
	rev(i,N){
		int j=A[i];
		for(int k:v)chmin(j,j^k);
		if(j){
			if(S[i]=='0')v.pb(j);
			else {
				puts("1");return;
			}
		}
	}
	puts("0");
}
signed main(){
	int t;cin>>t;
	while(t--)solve();
}
