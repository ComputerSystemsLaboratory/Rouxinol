#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

typedef set<string> ss;

int main()
{
	int N; cin >> N;
	ss U;
	rep(i, 0, N)
	{
		string s; cin >> s; U.insert(s);
	}

	int M; cin >> M;
	int f = 0;
	rep(i, 0, M)
	{
		string s; cin >> s;
		if (U.find(s) == U.end())
		{
			cout << "Unknown " + s << endl;
			continue;
		}

		if (f == 0)
			cout << "Opened by " + s << endl;
		else
			cout << "Closed by " + s << endl;

		f = (f + 1) % 2;
	}
}