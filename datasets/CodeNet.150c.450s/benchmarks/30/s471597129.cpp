#include <iostream>
#include <vector>

int main()
{
	int inputNum = 0;
	std::cin >> inputNum;
	std::vector<int> input(inputNum);
	
	for(int i = 0; i < inputNum; i++)
	{
		std::cin >> input[i];
	}
	
	int count = 0;
	for(int i = 0; i < inputNum; i++)
	{
		int minj = i;
		for(int j = i; j < inputNum; j++)
		{
			if(input[j] < input[minj])
			{
				minj = j;
			}
		}
		if(minj != i)
		{
			std::swap(input[i], input[minj]);
			count++;
		}
	}
	
	for(int i = 0; i < inputNum; i++)
	{
		std::cout << input[i];
		if(i != inputNum - 1)
		{
			std::cout << " ";
		}
	}
	std::cout << "\n" << count << std::endl;
	
	return 0;
}