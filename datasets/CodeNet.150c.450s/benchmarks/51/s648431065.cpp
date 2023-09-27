#include<iostream>
#include<vector>

int main()
{
	std::vector<bool> vec(30, false);
	for (int i = 0; i != 28; ++i)
	{
		int n;
		std::cin >> n;
		vec[n - 1] = true;
	}

	for (int i = 0; i != 30; ++i)
	{
		if (!vec[i])
			std::cout << i + 1 << std::endl;
	}

	return 0;
}