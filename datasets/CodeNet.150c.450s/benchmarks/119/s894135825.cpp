#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int (i) = 0;(i) < (n) ; ++(i))
#define REPS(a,i,n) for(int (i) = (a) ; (i) < (n) ; ++(i))
#define REVERSE(i,n) for(int (i) = n-1;(i) >= 0 ; --i)
#define ALL(c) (c).begin() , (c).end()
#define LL long long
#define int LL
#define inf  (1LL << 60)
#define mod 1000000007
#define QUICK_CIN ios::sync_with_stdio(false); cin.tie(0);
#define lower lower_bound
#define upper upper_bound
#define ZERO(c,n) memset(&c[0],0,sizeof(int)*n)
#define ZERO2(c,n) memset(&c[0][0],0,sizeof(int)*n
#define pl(a) cout << ""#a": " << a << endl;
#ifdef _DEBUG
#define debug_io fstream cin("input.txt");ofstream cout("output.txt");
template<class T>fstream& operator>>(fstream& is, vector<T>& v)
{
	int n = v.size();
	REP(i, n) {
		is >> v[i];
	}
	return is;
}
#else
#define debug_io ;
#endif
#define debug_input debug_io
#define DOWN(T) std::greater<T>()
template<class T>istream& operator>>(istream& is, vector<T>& v)
{
	int n = v.size();
	REP(i, n) {
		is >> v[i];
	}
	return is;
}
using vs = vector<string>; using vi = vector<int>; using pii = pair<int, int>;
using psi = pair<string, int>; using vvi = vector<vi>; using pss = pair<string, string>;
using vpii = vector<pii>;
template<class T>bool valid(T x, T w) { return 0 <= x&&x < w; }
//int dx[4] = { 1, -1, 0, 0 }; int dy[4] = { 0, 0, 1, -1 };
//-----------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------

bool ed[55][55];
int dx[8] = { 0,0,1,-1,1,-1,1,-1 };
int dy[8] = { 1,-1,0,0,1,1,-1,-1 };

signed main()
{
	QUICK_CIN;
	debug_input;
	int w, h;
	while (cin >> w >> h, w + h) {
		vector<vi> tile(h,vi(w));
		REP(i, h) {
			REP(j, w) {
				cin >> tile[i][j];
			}
		}

		int ans = 0;
		REP(i, 55) {
			REP(j, 55) {
				ed[i][j] = false;
			}
		}

		REP(i, h) {
			REP(j, w) {
				if (tile[i][j] != 1)
					continue;
				queue<pii> q;
				q.push({ i,j });
				while (q.size()) {
					auto t = q.front();
					q.pop();
					auto y = t.first;
					auto x = t.second;
					if (ed[y][x]) {
						continue;
					}
					tile[y][x] = 2;
					ed[y][x] = true;
					REP(k, 8) {
						auto nx = min(w-1,max(0LL,x + dx[k]));
						auto ny = min(h-1,max(0LL,y + dy[k]));
						if (!ed[ny][nx]&&tile[ny][nx]==1) {
							q.push({ ny,nx });
						}
					}
				}
				ans++;
			}
		}
		cout << ans << endl;
	}
}