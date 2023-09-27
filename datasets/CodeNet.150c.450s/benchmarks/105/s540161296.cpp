#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define repl(i,s,n) for(int i=s; i<=n; ++i)
#define rer(i,l,u) for(int (i)=(int)(l);(i)<=(int)(u);++(i))
#define reu(i,l,u) for(int (i)=(int)(l);(i)<(int)(u);++(i))
#if defined(_MSC_VER) || __cplusplus > 199711L
#define aut(r,v) auto r = (v)
#else
#define aut(r,v) __typeof(v) r = (v)
#endif
#define each(it,o) for(aut(it, (o).begin()); it != (o).end(); ++ it)
#define ktya(x) sort(all(x))
#define maxs(x,y) (x = max(x,y))
#define mins(x,y) (x = min(x,y))
#define all(aa) (aa).begin(), (aa).end()
#define pb(x) push_back(x)
#define mp(x,y) make_pair((x),(y))
#define mset(m,v) memset(m,v,sizeof(m))
#define INF 1e18
#define INFLL 1000000000000000007LL
//#define SIZE 200105
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()
#define mind(a,b) (a>b?b:a)
#define maxd(a,b) (a>b?a:b)
#define PI (acos(-1))
typedef vector<int> vi; typedef pair<int, int> pii; typedef vector<pair<int, int> > vpii; typedef long long ll;
typedef pair<int,ll> pill; typedef pair<ll,int> plli; 
typedef pair<double, int> pdi;
typedef pair<pair<ll, ll>,int> PP;
template<typename T, typename U> inline void amin(T &x, U y) { if(y < x) x = y; }
template<typename T, typename U> inline void amax(T &x, U y) { if(x < y) x = y; }
typedef complex<double> P;
typedef pair<pill,int> PA;
//ll MOD;
ll MOD = 998244353;
//ll MOD=998244353;
typedef ll Weight;
struct Edge {
	int src, dst;
	ll weight;
};

int T;
int sigcheck(ll num){
	int ret=0;
	while(num){
		num/=2;
		ret++;
	}
	return ret;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		ll A[205];
		rep(i,N)cin>>A[i];
		string str;
		cin>>str;
		vector<ll> zeros;
		bool ans=true;
		for(int i=N-1;i>=0;i--){
			if(str[i]=='0'){
				
				ll temp=A[i];
				
				rep(k,zeros.size()){
					if(sigcheck(temp)==sigcheck(zeros[k])){
						temp=temp^zeros[k];
					}
				}
				if(temp!=0){
					zeros.pb(temp);
					sort(all(zeros));
					reverse(all(zeros));
				}
			}else{
				
				//A[i]がzerosの線形和でかけるか
				ll temp=A[i];
				rep(k,zeros.size()){
					if(sigcheck(temp)==sigcheck(zeros[k])){
						temp=temp^zeros[k];
						//cout<<zeros[k]<<" "<<temp<<endl;
					}
				}
				if(temp!=0)ans=false;
			}
			
		}
		if(ans)cout<<0<<endl;
		else cout<<1<<endl;
	}
}