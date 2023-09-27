#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
#define reps(i,n) for(int i = 1; i <= n; i++)
#define rrep(i,n) for(int i = n-1; i >= 0; i--)
#define rreps(i,n) for(int i = n; i >= 1; i--)
#define mrep(i,from,n) for(int i = from; i < n; i++)
#define mreps(i,from,n) for(int i = from; i <= n; i++)
#define all(x) (x).begin(),(x).end()
#define sz(x) ((int)(x).size())
#define ERASE(x,val) x.erase(remove(ALL(x), val), x.end())
typedef long long ll;
typedef pair<ll, ll> P;
template<class T>inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; }return false; }
template<class T>inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; }return false; }
ll MOD = 1000000007;

void solve()
{	
	map<int, int> pip;
	rep(i, 6)
	{
		int tmp; cin >> tmp;
		pip[tmp] = i;
	}
	int r[6][6];
	r[0][1]=r[1][5]=r[5][4]=r[4][0] = 2;
	r[0][4]=r[4][5]=r[5][1]=r[1][0] = 3;
	r[1][2]=r[2][4]=r[4][3]=r[3][1] = 0;
	r[1][3]=r[3][4]=r[4][2]=r[2][1] = 5;
	r[0][2]=r[2][5]=r[5][3]=r[3][0] = 4;
	r[0][3]=r[3][5]=r[5][2]=r[2][0] = 1;
	int n; cin >> n;
	vector<int> ans;
	rep(i, n)
	{
		int a, b; cin >> a >> b;
		int up = pip[a];
		int front = pip[b];
		int right = r[up][front];
		int next = [&]()
		{
			for(auto e: pip)
			{
				if(e.second == right)return e.first;
			}
			return 0;
		}();
		ans.push_back(next);
	}
	rep(i, n)cout << ans[i] << endl;
	return;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	cout << fixed << setprecision(15);
	solve();
	return 0;
}

