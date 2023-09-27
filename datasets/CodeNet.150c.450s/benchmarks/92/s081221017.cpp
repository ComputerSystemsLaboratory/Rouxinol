#include <iostream>
#include <cmath>
#include <vector>
#include <cstdio>

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