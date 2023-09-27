#include<iostream>
#include<vector>

int main(int, char**)
{
	std::vector<int> nums;
	nums.reserve(30);
	std::vector<bool> pegion;
	pegion.resize(1000000, false);
	pegion[2] = true;

	int buff;
	int max = 0;
	while (std::cin >> buff)
	{
		nums.emplace_back(buff);
		if (max < buff)
		{
			max = buff;
		}
	}

	for (int target = 3; max >= target; ++target)
	{
		if (0 == target % 2)
		{
			continue;
		}
		int count = 0;
		bool flag = true;
		for (count = 3; target >= count * count; ++count)
		{
			if (0 == target % count)
			{
				flag = false;
				break;
			}
		}
		pegion[target] = flag;
	}

	for (const int num : nums)
	{
		int count = 0;
		for (int index = 0; num >= index; ++index)
		{
			if (pegion[index])
			{
				count += 1;
			}
		}
		std::cout << count << std::endl;
	}
}
