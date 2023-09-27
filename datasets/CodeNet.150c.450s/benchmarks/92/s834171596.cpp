#include <iostream>
#include <cmath>
#include <vector>
#include <cstdio>

template<class T>
T input()
{
	T val, val1;
	std::cin >> val >> val1;
	if (val == '\0')return EOF;
	else			return val+val1;
}

int main()
{
	std::vector<int> x;
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF)
		x.push_back(a+b);

	for (int i = 0; i < x.size(); ++i)
		std::cout << static_cast<int>(log10(x[i])) + 1 << std::endl;
	return 0;
}