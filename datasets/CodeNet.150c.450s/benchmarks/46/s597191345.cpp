#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, x;
	string ans;

	while (true)
	{
		cin >> n >> x;

		if (n == 0 && x == 0)
			break;

		int count = 0;
		for (int i = 1; i <= n; ++i)
			for (int j = i + 1; j <= n; ++j)
				for (int k = j + 1; k <= n; ++k)
					if (i + j + k == x)
						++count;

		ans += to_string(count);
		ans += " ";
	}

	for (int i = 0; i < ans.size(); ++i)
		(ans[i] != ' ') ? cout << ans[i] : cout << endl;

	return 0;
}