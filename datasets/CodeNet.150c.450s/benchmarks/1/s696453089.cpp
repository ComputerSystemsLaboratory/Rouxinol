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
    int n;
    cin >> n;
    
    vector<int> dp(n,INF);
    rep(i,0,n){
        int a;
        cin >> a;
        *(lower_bound(dp.begin(),dp.end(),a))=a;
    }
    
    for(int i=n-1; i>=0; --i) if(dp[i]!=INF){
        cout << i+1 << endl;
        break;
    }
}

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	solve();
	return 0;
}