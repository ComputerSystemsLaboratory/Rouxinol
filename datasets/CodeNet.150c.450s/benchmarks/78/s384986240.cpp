#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using vb=vector<bool>;
using vvb=vector<vb>;
using vd=vector<double>;
using vvd=vector<vd>;
using vi=vector<int>;
using vvi=vector<vi>;
using vl=vector<ll>;
using vvl=vector<vl>;
using pii=pair<int,int>;
using pll=pair<ll,ll>;
using tll=tuple<ll,ll>;
using tlll=tuple<ll,ll,ll>;
using vs=vector<string>;

#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define rep(i,n) range(i,0,n)
#define rrep(i,n) for(int i=(n)-1;i>=0;i--)
#define range(i,a,n) for(int i=(a);i<(n);i++)

#define LINF ((ll)1ll<<60)
#define INF ((int)1<<30)
#define EPS (1e-9)
#define MOD (1000000007ll)
#define fcout(a) cout<<setprecision(a)<<fixed
#define fs first
#define sc second
#define PI 3.1415926535897932384

int dx[]={1,0,-1,0,1,-1,-1,1},dy[]={0,1,0,-1,1,1,-1,-1};

template<class T>bool chmax(T&a,T b){if(a<b){a=b; return true;}return false;}
template<class T>bool chmin(T&a,T b){if(a>b){a=b; return true;}return false;}
template<class S>S acm(vector<S>&a){return accumulate(all(a),S());}
template<class S>S max(vector<S>&a){return *max_element(all(a));}
template<class S>S min(vector<S>&a){return *min_element(all(a));}
void YN(bool b){cout<<(b?"YES":"NO")<<"\n";}
void Yn(bool b){cout<<(b?"Yes":"No")<<"\n";}
void yn(bool b){cout<<(b?"yes":"no")<<"\n";}

ll max(int a,ll b){return max((ll)a,b);} ll max(ll a,int b){return max(a,(ll)b);}
template<class T>void puta(T&&t){cout<<t<<"\n";}
template<class H,class...T>void puta(H&&h,T&&...t){cout<<h<<' ';puta(t...);}
template<class S,class T>ostream&operator<<(ostream&os,pair<S,T>p){os<<"["<<p.first<<", "<<p.second<<"]";return os;};
template<class S>auto&operator<<(ostream&os,vector<S>t){bool a=1; for(auto s:t){os<<(a?"":" ")<<s;a=0;} return os;}

vi od,all;

void solve(int n){
	vi dp(n+1,INF);
	ll odans=0;
	dp[0]=0;
	rrep(i,od.size()){
		rep(j,n){
			if(dp[j]==INF)continue;
			if(j+od[i]>n)j=n;
			else chmin(dp[j+od[i]],dp[j]+1);
		}
	}
	odans=dp[n];
	rrep(i,all.size()){
		rep(j,n){
			if(dp[j]==INF)continue;
			if(j+all[i]>n)j=n;
			else chmin(dp[j+all[i]],dp[j]+1);
		}
	}
	puta(dp[n],odans);
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	for(int i=1;(i)*(i+1)*(i+2)/6<=1E6;i++){
		if((i)*(i+1)*(i+2)/6%2==1)od.push_back((i)*(i+1)*(i+2)/6);
		else all.push_back((i)*(i+1)*(i+2)/6);
	}
	while(cin>>n,n)solve(n);
}

