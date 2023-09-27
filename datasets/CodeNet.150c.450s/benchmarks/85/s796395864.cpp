#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(int)(n); i<i##_len; i++)
#define reps(i,n) for(int i=1 , i##_len=(int)(n);i<=i##_len;i++)
#define rrep(i,n) for(int i=((int)(n)-1);i>=0;i--)
#define rreps(i,n) for(int i=((int)(n));i>0;i--)
#define all(x) (x).begin(), (x).end()
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define solve(a) ((a)?"Yes":"No")
typedef vector<long long> V;
typedef vector<V> VV;
typedef pair<long long , long long> P;
typedef vector<P> VP;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
const long long INFLL = 1LL<<62;
const int INF = 1<<30;
const double PI=acos(-1);
ll func(int l,int r,VV &dp,vector<pair<ll,ll>>&data){
	if(dp[l][r]==-1){
		dp[l][r]=INFLL;
		for(int med=l;med<r;med++){
			chmin(dp[l][r],func(l,med,dp,data)+func(med+1,r,dp,data)+data[l].F*data[med].S*data[r].S);
		}
	}
	return dp[l][r];
}
int main(){
	int n;
	
	cin >>n;
	vector<pair<ll,ll>>data(n,mp(1,1));
	rep(i,n){
		cin>>data[i].F>>data[i].S;
	}
	VV dp(n,V(n,-1));
	rep(i,n){
		dp[i][i]=0LL;
	}

	cout<<func(0,n-1,dp,data)<<endl;
}
