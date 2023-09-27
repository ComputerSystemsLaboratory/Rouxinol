#include <iostream>
#include <vector>

template<class T>
T input()
{
	T val;
	std::cin >> val;
	return val;
}

int main()
{
	std::vector<int> x, y;

	while (true)
	{
		int val1 = input<int>(), val2 = input<int>();
		if (val1 == 0 && val2 == 0)break;
		if (val1 > val2)
		{
			int buf = val2;
			val2 = val1;
			val1 = buf;
		}
		x.push_back(val1), y.push_back(val2);

	}

	for (int i = 0; i < x.size(); ++i)
		std::cout << x[i] << " " << y[i] << std::endl;

	return 0;
}