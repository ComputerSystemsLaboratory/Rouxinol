#include<cstdio>

using namespace std;

int main()
{
	int a;
	int ans;
	while (1)
	{
		ans = 0;
		while (1)
		{
			a = getchar();

			if (a != '\n')
			{
				ans = ans + (a - '0');
			}
			else break;
		}
		if (ans == 0) break;
		else printf("%d\n", ans);
	}

	return 0;
}