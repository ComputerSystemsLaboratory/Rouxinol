#include <iostream>
#include <vector>

using namespace std;
typedef pair<char, char> P;

void solve()
{
	int n;
	while(cin >> n, n)
	{
		vector<P> trans(n);
		for(int i = 0; i < n; ++i)
		{
			cin >> trans[i].first >> trans[i].second;
		}
		int num;
		cin >> num;

		vector<char> c(num);
		for(int i = 0; i < num; ++i)
		{
			cin >> c[i];
		}
		for(int i = 0; i < num; ++i)
		{
			bool flag = true;
			for(int j = 0; j < n; ++j)
			{
				if(c[i] == trans[j].first)
				{
					cout << trans[j].second;
					flag = false;
				}
			}
			if(flag)
			{
				cout << c[i];
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