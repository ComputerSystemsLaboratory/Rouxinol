#include <queue>
#include <cstdio>

using namespace std;

int main()
{
	char Query[7]; int Number;

	priority_queue<int> que;

	while (Query[2] != 'd')
	{
		scanf("%s", Query);

		if (Query[0] == 'i') { scanf("%d", &Number); que.push(Number); }
		if (Query[1] == 'x') { printf("%d\n", que.top()); que.pop(); }
	}

	return 0;
}