#include <bits/stdc++.h>

using namespace std;
using ll =long long;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef pair<int,int> PII;
#define SORT(a) sort((a).begin(),(a).end())
#define rSORT(a) reverse((a).begin(),(a).end())
#define For(i, a, b)    for(int i = (a) ; i < (b) ; ++i)
#define rep(i, n)       For(i, 0, n)
#define debug(x)  cerr << #x << " = " << (x) << endl;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using P = pair<int,int>;
//Write From this Line

const int inf = 1e9+10;
vector<int> dp(100010,inf);
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n)cin>>a[i];
	
	rep(i,n){
		// a[i] を入れる最適な場所 ak < a[i+1] < a[k+1] となるような k を見つける
		int it = lower_bound(dp.begin(), dp.end(), a[i]+1) - dp.begin();
		if(it == 0) {
			dp[it] = a[i];
		} else{
			if(dp[it-1] < a[i]){
				dp[it] = a[i];
			}
		}
	}
	int ans = 0;
	rep(i,100010){
		if(dp[i] != inf){
			ans ++;
		}
	}
	cout << ans << endl;
}

