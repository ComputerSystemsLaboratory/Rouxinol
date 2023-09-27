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

char sym[] = { ' ','.', ',', '!','?' };
char alp[] = { '*', '*', 'a', 'd', 'g', 'j', 'm', 'p', 't' };

int main()
{
	int n;
	cin >> n;
	REP(k, n)
	{
		vector<char> v;
		string s;
		cin >> s;
		int cnt = 0;
		char buf = '0';
		REP(i, s.size())
		{
			if (s[i] == '0')
			{
				if (buf == '0') continue;
				else if (buf == '1') v.push_back(sym[cnt % 5]);
				else if (buf == '7')
				{
					if (cnt % 4 == 0) v.push_back('s');
					else v.push_back('p' + cnt % 4 - 1);
				}
				else if (buf == '9')
				{
					if (cnt % 4 == 0) v.push_back('z');
					else v.push_back('w' + cnt % 4 - 1);
				}
				else
				{
					if (cnt % 3 == 0) v.push_back(alp[buf - '0'] + 2);
					else v.push_back(alp[buf - '0'] + cnt % 3 - 1);
				}
				cnt = 0;
				buf = '0';
			}
			else
			{
				buf = s[i];
				cnt++;
			}
		}
		REP(i, v.size()) cout << v[i];
		cout << endl;
	}
	return 0;
}