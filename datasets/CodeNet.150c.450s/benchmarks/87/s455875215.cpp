#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef vector<pint> vpint;
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,n) for(int i=n-1;i>=(0);i--)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
#define each(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)
#define all(v) (v).begin(),(v).end()
#define eall(v) unique(all(v), v.end())
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define chmax(a, b) a = (((a)<(b)) ? (b) : (a))
#define chmin(a, b) a = (((a)>(b)) ? (b) : (a))
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFF = 1e18;


int main(void) {
	while(1) {
		int h; cin >> h;
		int b[12][6];
		if(h == 0) break;

		for (int i = h - 1; i >= 0; --i) {
			rep(j, 5) cin >> b[i][j];
		}

		ll ans = 0;
		rep(usagi, 100){

			rep(i, h){
				int c = b[i][2];
				int l = 2, r = 2; 
				REP(j, 2){
					if(b[i][j] == c) l = j;
					else break;
				}
				reps(j, 3, 5){
					if(b[i][j] == c) r = j;
					else break;
				}
				if(r - l + 1 < 3) continue;
				ans += c * (r - l + 1);
				reps(j, l, r + 1) b[i][j] = 0;
			}

			rep(j, 5){
				queue<int> q;
				rep(i, h){
					if(b[i][j] != 0) q.push(b[i][j]);
					b[i][j] = 0;
				}
				int cnt = 0;
				while(!q.empty()) {
					b[cnt][j] = q.front(); q.pop();
					cnt++;
				}
			}
			/*
			REP(y, h){
				rep(x, 5) printf("%d ", b[y][x]);
				printf("\n");
			}
			printf("\n");
			*/
		}
		cout << ans << endl;
	}
	return 0;
}