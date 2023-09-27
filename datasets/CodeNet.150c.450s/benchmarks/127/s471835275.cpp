#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main()
{
	int m; cin >> m;
	rep(_m, 0, m)
	{
		string s; cin >> s;

		set<string> _set;
		_set.insert(s);
		rep(i, 1, s.length())
		{
			string a = s.substr(0, i);
			string b = s.substr(i);

			string aa = a;
			reverse(aa.begin(), aa.end());

			string bb = b;
			reverse(bb.begin(), bb.end());

			_set.insert(a + bb);
			_set.insert(aa + b);
			_set.insert(aa + bb);
			_set.insert(b + a);
			_set.insert(b + aa);
			_set.insert(bb + a);
			_set.insert(bb + aa);
		}

		cout << _set.size() << endl;
	}
}