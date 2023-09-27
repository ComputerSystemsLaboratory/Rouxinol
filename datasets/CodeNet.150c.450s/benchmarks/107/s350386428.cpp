#include <bits/stdc++.h>
using namespace std;

#define rep(i,x,y) for(int i=(x);i<(y);++i)
#define mp(a,b) make_pair((a),(b))
#define debug(x) #x << "=" << (x)
 
#ifdef DEBUG
#define _GLIBCXX_DEBUG
#define dump(x) std::cerr << debug(x) << " (L:" << __LINE__ << ")" << std::endl
#else
#define dump(x)
#endif

typedef long long int ll;
typedef pair<int,int> pii;
//template<typename T> using vec=std::vector<T>;

const int INF=1<<30;
const long long int INFLL=1LL<<58;
const double EPS=1e-9;
const int dx[]={1,0,-1,0},dy[]={0,1,0,-1};

template <typename T> ostream &operator<<(ostream &os, const vector<T> &vec){
	os << "[";
	for (const auto &v : vec) {
		os << v << ",";
	}
	os << "]";
	return os;
}

void solve(){
    string a,b;
    cin >> a >> b;
    
    static int dp[1001][1001];
    fill_n((int*)dp,1001*1001,INF);

    rep(i,0,a.size()+1) dp[i][0]=i;
    rep(j,0,b.size()+1) dp[0][j]=j;

    rep(i,1,a.size()+1){
        rep(j,1,b.size()+1){
            int cost=!(a[i-1]==b[j-1]);
            dp[i][j]=min({dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]+cost});
        }
    }
    
    cout << dp[a.size()][b.size()] << endl;
}

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	solve();
	return 0;
}