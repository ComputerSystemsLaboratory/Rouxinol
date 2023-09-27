#include <cstdio>
#include <algorithm>
using namespace std;
int item_list[100][2];
int solution_list[101][10001];
int select(int size, int weight_a)
{
	if (solution_list[size][weight_a] == -1)
	{
		if (size < 0 || weight_a < 0)
		{
			return 0;
		}
		if (size == 0 || weight_a == 0) 
		{
			solution_list[size][weight_a] = 0;
			return 0;
		}
		if (item_list[size - 1][1] > weight_a)
		{
			solution_list[size][weight_a] = select(size - 1, weight_a);
			return solution_list[size][weight_a];
		}
		else
		{
			int a, b;
			a = item_list[size - 1][0] + select(size - 1, weight_a - item_list[size - 1][1]);
			b = select(size - 1, weight_a);
			solution_list[size][weight_a] = (a > b) ? a : b;
			return solution_list[size][weight_a];
		}
	}
	else
	{
		return solution_list[size][weight_a];
	}
}

int main()
{
	fill(&solution_list[0][0], &solution_list[100][10001], -1);
	int N, W;
	scanf("%d%d", &N, &W);
	for (int i = 0; i < N; i++)
	{
		scanf("%d%d", &item_list[i][0], &item_list[i][1]);
	}
	printf("%d\n", select(N, W));
	return 0;
}
