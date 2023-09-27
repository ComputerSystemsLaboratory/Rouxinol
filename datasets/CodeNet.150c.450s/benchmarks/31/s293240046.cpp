#define _CRT_SECURE_NO_WARNINGS 1

#include <queue>
#include <cstdio>
#include <limits>

int main()
{
	int n, MAX = std::numeric_limits<int>::min();

	std::queue<int> R;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int temp;

		scanf("%d", &temp);

		R.push(temp);

		if (MAX < R.back() - R.front() && R.size() > 1)
		{
			MAX = R.back() - R.front();
		}

		if (R.back() < R.front())
		{
			while (R.size() > 1)
			{
				R.pop();
			}
		}
	}

	printf("%d\n", MAX);

	return 0;
}

// Time : O( 2n )