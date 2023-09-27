#include "bits/stdc++.h"
using namespace std;

#define rep(i,a,b) for(int i=(a), i##_len=(b);i<i##_len;i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(c) begin(c),end(c)

//#define int long long
#define SZ(x) ((int)(x).size())
#define pb push_back
#define mp make_pair

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ll, int> pli;
typedef pair<double, double> pdd;

template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (b < a) { a = b; return true; } return false; }

const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;

struct P
{
	int x, y, t;
	P(int x, int y, int t) :x(x), y(y), t(t){}
	P() :P(-1, -1,-1) {}
};

string A[1000];
int cnt[1000][1000];
int H, W, N;

int solve(P sp)
{
	static const int dx[] = { 1,0,-1,0 };
	static const int dy[] = { 0,1,0,-1 };

	int ans = 0;
	rep(k, 1, N + 1)
	{
		queue<P> q;
		q.push(sp);
		cnt[sp.y][sp.x] = k;
		while (true)
		{
			P tp = q.front(); q.pop();
			if ((int)A[tp.y][tp.x] == ((int)'0' + k))
			{
				sp = P(tp.x, tp.y, 0);
				ans += tp.t;
				break;
			}

			rep(i, 0, 4)
			{
				P np(tp.x + dx[i], tp.y + dy[i], tp.t + 1);
				if (0 <= np.x&&np.x < W && 0 <= np.y&&np.y < H)
				{
					if (A[np.y][np.x] != 'X'&&cnt[np.y][np.x] < k)
					{
						cnt[np.y][np.x] = k;
						q.push(np);
					}
				}
			}
		}
	}

	return ans;
}

signed main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	P sp;
	cin >> H >> W >> N;
	rep(i, 0, H)
	{
		cin >> A[i];
		if (sp.x == -1)
		{
			rep(j, 0, SZ(A[i]))
			{
				if (A[i][j] == 'S')
				{
					sp = P(j, i, 0);
					break;
				}
			}
		}
	}
	cout << solve(sp) << endl;

	return 0;
}
