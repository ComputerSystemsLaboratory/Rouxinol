#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <set>
#include <map>
using namespace std;

#define REP(i, s, e) for (int i = (s); i < (e); i++)
#define REPI(i, s, e) for (int i = (s); i <= (e); i++)
#define rep(i, n) REP(i, 0, n)
#define repi(i, n) REPI(i, 0, n)
#define ALL(v) (v).begin(), (v).end()

#define dump(x) (cout << #x << " = " << x << endl)
#define dump2(x, y) (cout << "(" << #x << ", " << #y << ") = (" << x << ", " << y << ")" << endl)

typedef long long ll;
typedef pair<int, int> pii;

string rev(string str)
{
	reverse(str.begin(), str.end());
	return str;
}

int main(void)
{
	int n;
	cin >> n;
	rep(TTT, n) {
		string s;
		set<string> st;

		cin >> s;
		REPI(i, 1, s.size()-1) {
			string s1, s2;
			s1 = s.substr(0, i);
			s2 = s.substr(i, s.size()-i);
			
			st.insert(s1+s2);
			st.insert(s2+s1);
			st.insert(s1+rev(s2));
			st.insert(s2+rev(s1));
			st.insert(rev(s1)+s2);
			st.insert(rev(s2)+s1);
			st.insert(rev(s1)+rev(s2));
			st.insert(rev(s2)+rev(s1));
		}
		cout << st.size() << endl;
	}
	return 0;
}