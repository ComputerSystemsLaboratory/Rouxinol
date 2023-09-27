#include<iostream>
#include<array>
#include<utility>

template<typename T, size_t N>
void sort_array(std::array<T, N>& array);

int main()
{
	std::array<int, 10> input;
	for (unsigned long i = 0; i < input.size(); ++i)
	{
		std::cin >> input[i];
	}

	sort_array<int,input.size()>(input);
    
    std::cout << input[0] << std::endl
              << input[1] << std::endl
              << input[2] << std::endl;
	return 0;
}

template<typename T, size_t N>
void sort_array(std::array<T, N>& array)
{
	int temp = 0;
	for (unsigned long i = 0; i < array.size(); ++i)
	{
		temp = array[i];
		for (unsigned long j = i; j < array.size(); ++j)
		{
			if (temp < array[j])
			{
				std::swap(array[j], temp);
			}
		}
		array[i] = temp;
	}
}