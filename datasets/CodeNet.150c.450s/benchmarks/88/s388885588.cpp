#include <bits/stdc++.h>
using namespace std;
#define FOR(i,k,n) for(int i = (int)(k); i < (int)(n); i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) a.begin(), a.end()
#define MS(m,v) memset(m,v,sizeof(m))
#define D10 fixed<<setprecision(10)
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pii;
const int MOD = 1000000007;
const int INF = MOD + 1;
const ld EPS = 1e-12;
template<class T> T &chmin(T &a, const T &b) { return a = min(a, b); }
template<class T> T &chmax(T &a, const T &b) { return a = max(a, b); }

/*--------------------template--------------------*/

typedef tuple<int, int, int> rec;

int main()
{
	cin.sync_with_stdio(false);
	int h, w;
	vector<rec> v;
	FOR(i, 1, 151)FOR(j, 1, i)
	{
		v.emplace_back(i*i+j*j, j, i);
	}
	sort(ALL(v));
	while (cin >> h >> w, h)
	{
		REP(i, v.size())
		{
			rec tmp = make_tuple(h*h + w*w, h, w);
			if (v[i] == tmp)
			{
				cout << get<1>(v[i + 1]) << " " << get<2>(v[i + 1]) << endl;
			}
		}
	}
	return 0;
}