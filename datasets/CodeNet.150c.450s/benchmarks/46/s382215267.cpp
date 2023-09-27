#include <iostream>
#include <vector>

using namespace std;

#define B

#ifdef B
int main(void)
{
	int n, x;
	vector<int> ans;
	while (true)
	{

		cin >> n >> x;
		if (n == 0 && x == 0)
			break;
		int cnt = 0;
		for (size_t i = 1; i < n-1; i++)
		{
			for (size_t j = i + 1; j < n; j++)
			{
				for (size_t k = j+1; k <= n; k++)
				{
					if (i + j + k == x)
						cnt++;
				}
			}
		}
		ans.push_back(cnt);
	}
	for (auto a : ans)
	{
		cout << a << endl;
	}
	return 0;
}
#endif // B