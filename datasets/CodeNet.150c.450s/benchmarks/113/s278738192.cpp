#include <iostream>
#include <queue>

int main()
{
	std::queue<int> x;
	int n;

	while (1)
	{
		std::cin >> n;

		if (n == 0)
		{
			break;
		}

		x.push(n);
	}

	n = 0;

	while (!x.empty())
	{
		std::cout << "Case " << ++n << ": " << x.front() << std::endl;
		x.pop();
	}

	return 0;
}