#include <bits/stdc++.h>
using namespace std;
int m;
map<string, int> f;
int main()
{
	string s, t, u;
	int N=0;
	while(cin >> s)
	{
		f[s]++;
		if(f[s]>N)
		{
			N++;
			t=s;
		}
		if(s.size()>u.size())
		{
			u=s;
		}
	}
	cout << t << ' ' << u << endl;
	return 0;
}