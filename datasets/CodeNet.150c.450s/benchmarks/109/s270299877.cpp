#include <iostream>
#include <string.h>
#include <string>
#include <vector>

using namespace std;

void solve()
{
	int n;
	while(cin >> n, n)
	{
		int used[86401];
		memset(used, 0, sizeof(used));
		for(int i = 0; i < n; ++i)
		{
			string start, end;
			cin >> start >> end;
			int s = (start[0] - '0') * 10 * 3600 + (start[1] - '0') * 3600 + (start[3] - '0') * 10 * 60 + (start[4] - '0') * 60 + (start[6] - '0') * 10 + (start[7] - '0');
			int t = (end[0] - '0') * 10 * 3600 + (end[1] - '0') * 3600 + (end[3] - '0') * 10 * 60 + (end[4] - '0') * 60 + (end[6] - '0') * 10 + (end[7] - '0');
			for(int j = s; j < t; ++j)
			{
				++used[j];
			}
		}
		int max_val = 0;
		for(int i = 0; i < 86401; ++i)
		{
			max_val = max(max_val, used[i]);
		}
		cout << max_val << endl;
	}
}

int main()
{
	solve();
	return(0);
}