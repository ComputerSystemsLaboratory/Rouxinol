#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
const int dx[]={1,0,-1,0,1,-1,-1,1,0};
const int dy[]={0,1,0,-1,1,1,-1,-1,0};
const int INF = 1e9+101;
const long long LINF = 1e18;
const double EPS = 1e-8;
#define pb push_back
#define mk make_pair
#define fr first
#define sc second
#define reps(i,j,k) for(ll i = (j); i < (k); ++i)
#define rep(i,j) reps(i,0,j)
#define all(a) (a).begin(),(a).end()
#define MOD 1000000007
typedef long long ll;
typedef pair<ll,ll> Pii;
typedef pair<Pii,int> P;
typedef vector<int> vi;
typedef vector<ll> vll;
template<class T>
ostream& operator<<(ostream &out, const vector<T> &v){
	out << "{";
	rep(i,v.size()){
		out << v[i] <<", ";
	}
	return out << "}" << endl;
}

int main() {
    string a,b;
    cin >> a >> b;

    int dp[1024][1024] = {{}};
    rep(i,a.size()) {
        rep(j,b.size()){
            dp[i][j] = INF;
        }
    }

    rep(i,a.size()+1) dp[i][0] = i;
    rep(j,b.size()+1) dp[0][j] = j;

    reps(i,1,a.size()+1) { 
        reps(j,1,b.size()+1) {
            dp[i][j] = min(dp[i][j-1] + 1, min(dp[i-1][j] + 1, dp[i-1][j-1] + (int)(a[i-1]!=b[j-1])));
        }
    }

    cout << dp[a.size()][b.size()] << endl;

    return 0;  
}
