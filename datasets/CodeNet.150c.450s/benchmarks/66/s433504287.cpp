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

int n, m;
string id[1000];

int main()
{
	cin >> n;
	REP(i, n) cin >> id[i];
	cin >> m;
	string s;
	bool rock = false;
	REP(i, m)
	{
		bool flag = false;
		cin >> s;
		REP(i, n) if (s == id[i]) flag = true;
		if (flag)
		{
			if (rock == false) cout << "Opened by ";
			else cout << "Closed by ";
			cout << s << endl;
			rock = !rock;
		}
		else cout << "Unknown " << s << endl;
	}

	return 0;
}