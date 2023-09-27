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

void solve(){

}
int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h,w,n;
	ll ans=0;
	char c;
	cin>>h>>w>>n;
	vl sx(n+1),sy(n+1);
	int tx,ty;
	vvl vv(h+2,vl(w+2,-1));
	rep(i,h){
		rep(j,w){
			cin>>c;
			vv[i+1][j+1]=(c!='X'?INF:-1);
			if(c=='S'){sx[0]=i+1,sy[0]=j+1;}
			if(1<=c-'0'&&c-'0'<=9){sx[c-'0']=i+1;sy[c-'0']=j+1;}
		}
	}
	rep(i,n){

		queue<pll> q;
		vv[sx[i]][sy[i]]=0;
		q.push(pll(sx[i],sy[i]));
		while(!q.empty()){
			tie(tx,ty)=q.front();q.pop();
			rep(i,4){
				if(vv[tx+dx[i]][ty+dy[i]]==INF){
					vv[tx+dx[i]][ty+dy[i]]=vv[tx][ty]+1;
					q.push(pll(tx+dx[i],ty+dy[i]));
				}
			}
		}
		ans+=(vv[sx[i+1]][sy[i+1]]-vv[sx[i]][sy[i]]);
		rep(i,h){
			rep(j,w){
				if(vv[i+1][j+1]!=-1)vv[i+1][j+1]=INF;
			}
		}
	}
	cout<<ans<<endl;
}

