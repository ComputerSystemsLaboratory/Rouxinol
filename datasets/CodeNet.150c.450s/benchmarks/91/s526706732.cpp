#include <bits/stdc++.h>
using namespace std;

#define rep(i,x,y) for(int i=(x);i<(y);++i)
#define debug(x) #x << "=" << (x)

#ifdef DEBUG
#define _GLIBCXX_DEBUG
#define show(x) std::cerr << debug(x) << " (L:" << __LINE__ << ")" << std::endl
#else
#define show(x)
#endif

typedef long long int ll;
typedef pair<int,int> pii;
template<typename T> using vec=std::vector<T>;

const int inf=1<<30;
const long long int infll=1LL<<62;
const double eps=1e-9;
const int dx[]={1,0,-1,0},dy[]={0,1,0,-1};

template <typename T> ostream &operator<<(ostream &os, const vector<T> &vec){
    os << "[";
    for (const auto &v : vec) {
    	os << v << ",";
    }
    os << "]";
    return os;
}

void init_sieve(vector<bool> &is_prime,int n){
	for(int i=0; i<n; ++i) is_prime[i]=true;
	is_prime[0]=is_prime[1]=false;
	for(int i=2; i*i<=n; ++i){
		if(is_prime[i]){
			for(int j=2*i; j<n; j+=i) is_prime[j]=false;
		}
	}
}

vector<bool> is_prime(1e6,true);

void solve(int n){
    int ans=0;
    rep(i,0,n+1) if(is_prime[i]) ++ans;
    cout << ans << endl;
}

int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);
    cout.setf(ios::fixed);
    cout.precision(10);
    init_sieve(is_prime,1e6);
    int n;
    while(cin >> n) solve(n);
    return 0;
}