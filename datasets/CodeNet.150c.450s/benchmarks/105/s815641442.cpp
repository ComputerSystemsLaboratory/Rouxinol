#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using uint = unsigned int;
#define rep(i,n) for(int i=0;i<int(n);i++)
#define rep1(i,n) for(int i=1;i<=int(n);i++)
#define per(i,n) for(int i=int(n)-1;i>=0;i--)
#define per1(i,n) for(int i=int(n);i>0;i--)
#define all(c) c.begin(),c.end()
#define si(x) int(x.size())
#define pb emplace_back
#define fs first
#define sc second
template<class T> using V = vector<T>;
template<class T> using VV = vector<vector<T>>;
template<class T,class U> void chmax(T& x, U y){if(x<y) x=y;}
template<class T,class U> void chmin(T& x, U y){if(y<x) x=y;}
template<class T> void mkuni(V<T>& v){sort(all(v));v.erase(unique(all(v)),v.end());}
template<class S,class T> ostream& operator<<(ostream& o,const pair<S,T> &p){
	return o<<"("<<p.fs<<","<<p.sc<<")";
}
template<class T> ostream& operator<<(ostream& o,const vector<T> &vc){
	o<<"{";
	for(const T& v:vc) o<<v<<",";
	o<<"}";
	return o;
}
constexpr ll TEN(int n) { return (n == 0) ? 1 : 10 * TEN(n-1); }

#ifdef LOCAL
#define show(x) cerr << "LINE" << __LINE__ << " : " << #x << " = " << (x) << endl
void dmpr(ostream& os){os<<endl;}
template<class T,class... Args>
void dmpr(ostream&os,const T&t,const Args&... args){
	os<<t<<" ~ ";
	dmpr(os,args...);
}
#define shows(...) cerr << "LINE" << __LINE__ << " : ";dmpr(cerr,##__VA_ARGS__)
#define dump(x) cerr << "LINE" << __LINE__ << " : " << #x << " = {";  \
	for(auto v: x) cerr << v << ","; cerr << "}" << endl;
#else
#define show(x) void(0)
#define dump(x) void(0)
#define shows(...) void(0)
#endif

const int D = 60;
V<ll> B(D);

void add(ll x){
    for(int i=D-1;i>=0;i--){
        if(B[i] == 0 && x&1LL<<i){ // add to base
            B[i] = x;
            return;
        }else if(x&1ULL<<i){
            x ^= B[i];
        }
    }
}
bool in(ll x){
    for(int i=D-1;i>=0;i--){
        if(B[i] == 0 && x&1LL<<i){ // add to base
            return false;
        }else if(x&1ULL<<i){
            x ^= B[i];
        }
    }
	return true;
}
int solve(){
	rep(i,D) B[i] = 0;
	int N; cin >> N;
	V<ll> A(N); rep(i,N) cin >> A[i];
	string s; cin >> s;
	per(i,N){
		if(s[i] == '0'){
			add(A[i]);
		}else{
			if(!in(A[i])) return 1;
		}
	}
	return 0;
}
int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);		//DON'T USE scanf/printf/puts !!
	cout << fixed << setprecision(20);

	int T; cin >> T;
	while(T--) cout << solve() << endl;
}
