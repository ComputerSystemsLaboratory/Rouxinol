#include <iostream>
#include <vector>
#include <array>
#include <stack>

int main()
{
	std::vector<int> a;
	std::vector<int> b;

	int n = 0;
	std::cin >> n;

	while (n--)
	{
		bool is_failure = false;

		int datas[10] = { 0 };
		std::cin >> datas[0] >> datas[1] >> datas[2] >> datas[3] >> datas[4] >> datas[5] >> datas[6] >> datas[7] >> datas[8] >> datas[9];

		std::stack<int> stack_a{};
		std::stack<int> stack_b{};

		for (auto data : datas)
		{
			if (stack_a.empty())
			{
				stack_a.push(data);
				continue;
			}

			if (stack_a.top() < data)
			{
				stack_a.push(data);
				continue;
			}

			if (stack_b.empty())
			{
				stack_b.push(data);
				continue;
			}

			if (stack_b.top() < data)
			{
				stack_b.push(data);
				continue;
			}

			is_failure = true;
			break;
		}

		if (false == is_failure)
		{
			std::cout << "YES" << std::endl;
		}
		else
		{
			std::cout << "NO" << std::endl;
		}
	}

	return 0;
}