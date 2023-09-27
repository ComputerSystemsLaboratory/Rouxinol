#include<iostream>
#include<vector>

struct Edge {
	int to, weight;
};

int main()
{
	int n, u, k, v, c, distance[100]{}, upd_num = 1;
	bool must_update[100]{ 1 };
	std::vector<Edge> dest[100];

	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> u >> k;
		for (int j = 0; j < k; ++j)
		{
			std::cin >> v >> c;
			dest[u].push_back({ v, c });
		}
		if (i)
			distance[i] = 2000000000;
	}

	while (upd_num)
		for (int i = 0; i < n && upd_num; i++)
		{
			if (!must_update[i]) continue;

			must_update[i] = false;
			upd_num--;
			for (auto e : dest[i])
			{
				int tmp = distance[i] + e.weight;
				if (tmp < distance[e.to])
				{
					distance[e.to] = tmp;
					if (!must_update[e.to])
					{
						must_update[e.to] = true;
						upd_num++;
					}
				}
			}
		}

	for (int i = 0; i < n; i++)
	{
		std::cout << i << " " << distance[i] << std::endl;
	}

	return 0;
}
