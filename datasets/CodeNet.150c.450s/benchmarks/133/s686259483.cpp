#include "bits/stdc++.h"
using namespace std;
#ifdef _DEBUG
#define dlog(str) cout << "====" << str << endl;
#else
#define dlog(str)
#endif
#define INF 999999999
#define MOD 1000000007
#define REP(i, n) for(int i = 0, i##_l = (n); i < i##_l; i++)
#define FOR(i, s, e) for(int i = s, i##_l = (e); i < i##_l; i++)
#define LLI long long int
#define _min(a,b) ((a<b)?a:b)
#define _max(a,b) ((a<b)?b:a)
#define chmax(a, b) a = _max(a, b)
#define chmin(a, b) a = _min(a, b)
#define bit(a, shift) ((a>>shift)&1))
#define pm(a) ((a)?1:-1)
#define SORT(v) sort(v.begin(),v.end())
#define RSORT(v) sort((v).rbegin(), (v).rend())
// int 2.14E±9    lli 9.2E±18    double 1.7E±380


int main()
{
	cout << fixed << setprecision(10);

	int D;
	cin >> D;

	vector<int> c(26);

	REP(i, 26)
	{
		cin >> c[i];
	}

	vector<vector<int>> s(D, vector<int>(26));

	REP(d, D)
	{
		REP(j, 26)
		{
			cin >> s[d][j];
		}
	}


	vector<int> last(26, 0);
	int sat = 0;

	REP(d, D)
	{
		//int mi = 0;
		//REP(i, 26)
		//{
		//	if (s[d][mi] < s[d][i])mi = i;
		//}
		//last[mi] = d;

		int t;
		cin >> t;
		t--;
		last[t] = d + 1;



		sat += s[d][t];
		REP(i, 26)
		{
			sat -= c[i] * (d + 1 - last[i]);
		}
		cout << sat << endl;
	}
	return 0;
}