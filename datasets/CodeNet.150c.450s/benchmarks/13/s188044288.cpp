#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
 
//const int dx[] = {1, 0, -1, 0, 1, -1, -1, 1};
//const int dy[] = {0, 1, 0, -1, 1, 1, -1, -1};
 
int main()
{
	string s, p;
	cin >> s >> p;
	string tmp = s + s;


	REP(i, (int)tmp.size() - (int)p.size()){
		bool flag = true;
		REP(j, (int)p.size()){
			if (tmp[i+j] != p[j]) flag = 0;
		}
		if (flag){
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;

}

