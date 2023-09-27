#include <iostream>
#include <vector>


int input()
{
	int val;
	std::cin >> val;
	return val;
}

int main()
{
	std::vector<int> x;

	while (true)
	{
		int val = input();
		if (val == 0)break;
		x.push_back(val);
	}

	for (int i = 0; i < x.size();++i)
		std::cout << "Case " << i+1 << ": " << x[i] << std::endl;

	return 0;
}