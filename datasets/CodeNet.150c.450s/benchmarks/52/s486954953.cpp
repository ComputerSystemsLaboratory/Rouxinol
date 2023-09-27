#include<iostream>
#include<vector>
int main()
{
	std::vector<int>num;
	for (int i; std::cin >> i;)
	{
		if (i == 0)
		{
			std::cout << num.back() << std::endl;
			num.pop_back();
		}
		else
		{
			num.push_back(i);
		}
	}
}
