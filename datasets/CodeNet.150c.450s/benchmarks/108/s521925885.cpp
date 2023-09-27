#include <iostream>
#include <vector>
#include <queue>

int main()
{
	int n;
	std::cin >> n;
	std::vector<std::vector<int> > E(n); 
	for (int i = 0; i < n; i++)
	{
		int u, k;
		std::vector<int> G;
		std::cin >> u >> k;
		u--;
		for (int j = 0; j < k; j++)
		{
			int g;
			std::cin >> g;
			g--;
			G.push_back(g);
		}
		E.at(u) = G;
	}
	std::vector<int> Dist(n, -1);
	Dist.at(0) = 0;
	std::queue<int> Que;
	Que.push(0);
	while (!(Que.empty()))
	{
		int s = Que.front();
		Que.pop();
		for (int i = 0; i < E.at(s).size(); i++)
		{
			int next = E.at(s).at(i);
			if (Dist.at(next) == -1)
			{
				Dist.at(next) = Dist.at(s) + 1;
				Que.push(next);
			}
		}
	}
	for (int i = 0; i < n; i++)
		std::cout << i + 1 << ' ' << Dist.at(i) << '\n';
	return 0;
}
