#include <iostream>
#include <vector>

void InputNumbers(int& Count,std::vector<int>& Numbers);
void OutputNumbers(const std::vector<int>& Numbers);
int BubbleSort(std::vector<int>& Numbers);

int main()
{
	int Count = 0;
	std::vector<int> Numbers;
	InputNumbers(Count,Numbers);
	
	int SwapCount = BubbleSort(Numbers);
	
	OutputNumbers(Numbers);
	std::cout << SwapCount << std::endl;
	
	return 0;
}

void InputNumbers(int& Count,std::vector<int>& Numbers)
{
	std::cin >> Count;
	for(int i=0;i<Count;i++)
	{
		int Input = 0;
		std::cin >> Input;
		Numbers.push_back(Input);
	}
}

void OutputNumbers(const std::vector<int>& Numbers)
{
	for(unsigned int i=0;i<Numbers.size();i++)
	{
		std::cout << Numbers[i] << std::flush;
		if(i != Numbers.size() - 1)
		{
			std::cout << " " << std::flush;
		}else{
			std::cout << std::endl;
		}
	}
}

int BubbleSort(std::vector<int>& Numbers)
{
	int SwapCount = 0;
	for(unsigned int i = 0;i<Numbers.size();i++)
	{
		for(unsigned int j = Numbers.size() - 1;j > i;j--)
		{
			if(Numbers[j] < Numbers[j-1])
			{
				std::swap(Numbers[j],Numbers[j-1]);
				SwapCount++;
			}
		}
	}
	return SwapCount;
}