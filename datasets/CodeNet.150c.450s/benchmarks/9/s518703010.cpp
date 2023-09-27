#include <iostream>
#include <string>
#include <vector>
#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
	string s;
	while(cin >> s)
	{
		if(s == "-") break;

		int m;
		cin >> m;
		rep(i,m)
		{
			int n;
			cin >> n;
			vector<char> c;
			REP(i,n,s.size())
			{
				c.push_back(s[i]);
			}

			rep(i,n)
			{
				c.push_back(s[i]);
			}

			rep(i,s.size())
			{
				s[i] = c[i];
			}
		}

		cout << s << endl;
	}
	return 0;
}