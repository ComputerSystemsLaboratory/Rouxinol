#include <iostream>
#include <vector>

void InputNumbers(int& Count,std::vector<int>& Numbers);
void OutputNumbers(const std::vector<int>& Numbers);
int SelectionSort(std::vector<int>& Numbers);

int main()
{
	int Count = 0;
	std::vector<int> Numbers;
	InputNumbers(Count,Numbers);
	
	int SwapCount = SelectionSort(Numbers);
	
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

int SelectionSort(std::vector<int>& Numbers)
{
	int SwapCount = 0;
	for(unsigned int i = 0;i<Numbers.size();i++)
	{
		unsigned int Min = i;
		for(unsigned int j = i;j<Numbers.size();j++)
		{
			if(Numbers[j] < Numbers[Min])
			{
				Min = j;
			}
		}
		if(i != Min) SwapCount++;
		std::swap(Numbers[i],Numbers[Min]);
	}
	return SwapCount;
}