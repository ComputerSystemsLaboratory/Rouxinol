#include <iostream>
#include <vector>

int main()
{
	int n;
	int *sequence;
	std::cin >> n;
	sequence = new int[n];
	for (int i = 0; i < n; i++)
	{
		int num;
		std::cin >> num;
		sequence[i] = num;
	}
	for (int i = n -1; i >= 0; i--)
	{
		std::cout << sequence[i];
		if (i > 0)
		{
			std::cout << " ";
		}
		else
		{
			std::cout << '\n';
		}
	}
	return 0;
}