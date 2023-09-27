#include<stack>
#include<cstdio>

using namespace std;

int main()
{
	int train;
	stack<int>station;
	while (scanf("%d", &train) != EOF)
	{
		if (train == 0)
		{
			printf("%d\n", station.top());
			station.pop();
		}
		else
		{
			station.push(train);
		}
	}
	return 0;
}