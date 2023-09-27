#include <iostream>
#include <map>

std::pair<int, int> FibonacciPair(int Index)
{
	if(Index == 0) return std::make_pair(0, 1);
	if(Index == 1) return std::make_pair(1, 1);
	std::pair<int, int> Prev = FibonacciPair(Index - 1);
	return std::make_pair(Prev.second, Prev.first + Prev.second);
}

int FibonacciNumber(int Index)
{
	return FibonacciPair(Index).second;
}

int main()
{
	int Index;
	std::cin >> Index;
	std::cout << FibonacciNumber(Index) << std::endl;
	return 0;
}