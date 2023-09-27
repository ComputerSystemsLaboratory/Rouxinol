#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>

using namespace std;

void solve()
{
	priority_queue<int> pque;
	char order[10] = "";
	while (true)
	{
		cin >> order;
		//scanf_s(" %s", order);
		if (order[2] == 'd')
		{
			break;
		}
		else if (order[0] == 'i')
		{
			int num;
			scanf("%d", &num);
			pque.push(num);
		}
		else
		{
			printf("%d\n", pque.top());
			pque.pop();
		}
	}
}

int main()
{
	solve();
	return(0);
}