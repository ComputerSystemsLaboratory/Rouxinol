#include <bits/stdc++.h>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ll long long
#define ALL(a) (a).begin(),(a).end()
#define SORT(v) sort(ALL(v))
//#define scanf scanf_s
typedef pair<int, int> P;

string rev(string s)
{
	reverse(ALL(s));
	return s;
}

int main()
{
	int m;
	cin >> m;
	REP(q, m)
	{
		string s;
		cin >> s;
		set<string> ari;
		ari.insert(s);
		FOR(i, 1, s.size())
		{
			string a = s.substr(0, i);
			string b = s.substr(i, s.size());
			string reva = rev(a);
			string revb = rev(b);
			ari.insert(a + revb);
			ari.insert(reva + b);
			ari.insert(reva + revb);
			ari.insert(b + a);
			ari.insert(b + reva);
			ari.insert(revb + a);
			ari.insert(revb + reva);
		}
		cout << ari.size() << endl;
	}
	return 0;
}