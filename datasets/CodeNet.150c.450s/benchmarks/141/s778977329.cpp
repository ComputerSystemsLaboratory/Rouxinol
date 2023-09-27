#include<iostream>
#include<vector>
int main()
{
	std::vector<bool>result;
	while (true)
	{
		double x1, y1, x2, y2, x3, y3, xp, yp;
		std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp;
		if (!std::cin)
		{
			break;
		}
		double k = ((x2 - x3)*(y3 - y1) - (x3 - x1)*(y2 - y3)) / ((x2 - x3)*(yp - y1) - (xp - x1)*(y2 - y3));
		double s = ((x1 - x3)*(yp - y1) - (xp - x1)*(y1 - y3)) / ((x2 - x3)*(yp - y1) - (xp - x1)*(y2 - y3));
		result.push_back(1 < k && 0 < s && s < 1);
	}
	for (auto i : result)
	{
		std::cout << (i ? "YES" : "NO") << std::endl;
	}
	return 0;
}
