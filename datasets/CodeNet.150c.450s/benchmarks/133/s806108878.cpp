#include <bits/stdc++.h>

using namespace std;
using ll =long long;
typedef pair<int,int> P;
#define SORT(a) sort((a).begin(),(a).end())
#define rSORT(a) reverse((a).begin(),(a).end())
#define For(i, a, b)    for(int i = (a) ; i < (b) ; ++i)
#define rep(i, n)       For(i, 0, n)
#define debug(x)  cerr << #x << " = " << (x) << endl;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
//Write From this Line

int main()
{
	int d;
	cin >> d;
	vector<int> c(26);
	rep(i,26) cin >> c[i]; 
	vector<vector<int>> s(d,vector<int>(26));
	rep(i,d) rep(j,26) cin >> s[i][j];

	vector<int> t(d);
	rep(i,d){
		cin >> t[i];
		t[i]--;//ゲームは0-indexed
	}
	// 最後に試合を行った日を保持する。
	//vector<int> last_d(26,0);
	vector<vector<int>> last_d(d,vector<int>(26,-1));
	ll ans = 0;
	rep(i,d){
		// i日目に試合t[i-1]を行う。
		int game = t[i];
		if(i != 0){
			rep(j,26){
				last_d[i][j] = last_d[i-1][j];
			}
		}
		last_d[i][game] = i;
		ans += s[i][game];
		rep(j,26){
			ans -= c[j] * (i - last_d[i][j]);
		}
		cout << ans << endl;
	}
//	int m;
//	cin >> m;
//	rep(i,m){
//		int d, q;
//		cin >> d >> q;
//		--d, --q;
//
//	}
}
