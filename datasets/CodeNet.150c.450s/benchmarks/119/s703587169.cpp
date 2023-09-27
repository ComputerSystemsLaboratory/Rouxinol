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
using pll=pair<ll,ll>;
using tll=tuple<ll,ll>;
using vs=vector<string>;
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define rep(i,n) range(i,0,n)
#define rrep(i,n) for(int i=(n)-1;i>=0;i--)
#define range(i,a,n) for(int i=(a);i<(n);i++)

#define LINF    	((ll)1ll<<60)
#define INF     	((int)1<<30)
#define EPS     	(1e-9)
#define MOD     	(1000000007ll)
#define fcout(a)	cout<<setprecision(a)<<fixed
#define fs 			first
#define sc			second
#define PI			3.1415926535897932384

int dx[]={1,0,-1,0,1,-1,-1,1},dy[]={0,1,0,-1,1,1,-1,-1};
template<class S,class T>ostream&operator<<(ostream&os,pair<S,T>p){os<<"["<<p.first<<", "<<p.second<<"]";return os;};
template<class S>auto&operator<<(ostream&os,vector<S>t){bool a=1; for(auto s:t){os<<(a?"":" ")<<s; a=0;} return os;}
void OUT(bool b){cout<<(b?"YES":"NO")<<endl;}
void Out(bool b){cout<<(b?"Yes":"No")<<endl;}
void out(bool b){cout<<(b?"yes":"no")<<endl;}
int popcnt(int x) { return __builtin_popcount(x); }
int popcnt(ll x) { return __builtin_popcountll(x); }
int clz(int x) { return 31 - __builtin_clz(x); }
int clz(ll x) { return 63 - __builtin_clzll(x); }
int ctz(int x) { return __builtin_ctz(x); }
int ctz(ll x) { return __builtin_ctzll(x); }

class compare {
public:
	bool operator()(tuple<ll, ll> a, tuple<ll, ll> b) {
		return (get<1>(a) > get<1>(b));
	}
};

void solve(int h,int w){
	int in;
	int ans=0;
	vvb vv(h+2,(vb(w+2,false)));
	rep(i,h){
		rep(j,w){
			cin>>in;
			vv[i+1][j+1]=(in==1);
		}
	}
	rep(i,h){
		rep(j,w){
			if(vv[i+1][j+1]){
				stack<pll> stk;
				stk.push(pll(i+1,j+1));
				while(!stk.empty()){
					int x,y;
					tie(x,y)=stk.top();stk.pop();
					vv[x][y]=false;
					rep(k,8){
						if(vv[x+dx[k]][y+dy[k]])stk.push(pll(x+dx[k],y+dy[k]));
					}
				}
				ans++;
			}
		}
	}
	cout<<ans<<endl;
}
int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int w,h;
	while(cin>>h>>w,h){
		solve(w,h);
	}
}

