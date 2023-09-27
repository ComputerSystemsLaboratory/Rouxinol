#include <iostream>
#include <vector>

using namespace std;
typedef pair<char, char> P;

void solve()
{
	int n;
	while(cin >> n, n)
	{
		vector<P> Vec;
		for(int i = 0; i < n; ++i)
		{
			P p;
			cin >> p.first >> p.second;
			Vec.push_back(p);
		}
		int m;
		cin >> m;
		for(int i = 0; i < m; ++i)
		{
			char c;
			cin >> c;
			bool flag = false;
			for(int j = 0; j < Vec.size(); ++j)
			{
				if(Vec[j].first == c)
				{
					flag = true;
					cout << Vec[j].second;
				}
			}
			if(!flag)
			{
				cout << c;
			}
		}
		cout << endl;
	}
}

int main()
{
	solve();
	return(0);
}