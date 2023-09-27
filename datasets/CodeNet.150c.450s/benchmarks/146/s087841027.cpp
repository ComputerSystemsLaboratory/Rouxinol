#include<iostream>
#include<vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<bool>result(n);
	for (int i = 0; i < n; i++)
	{
		long double x1, y1, x2, y2, x3, y3, x4, y4;
		std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		result[i] = x1 == x2 && x3 == x4 || (y1 - y2) / (x1 - x2) == (y3 - y4) / (x3 - x4);
	}
	for (auto i : result)
	{
		std::cout << (i ? "YES" : "NO") << std::endl;
	}
	return 0;
}
