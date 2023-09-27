#include <iostream>
#include <vector>

struct Data
{
	int x;
	int y;
};

int main()
{
	Data data;
	std::vector<Data> vector;

	while (1)
	{
		std::cin >> data.x >> data.y;

		if (data.x == 0 && data.y == 0)
		{
			break;
		}

		vector.push_back(data);
	}

	for (int i = 0; i < vector.size(); ++i)
	{
		if (vector[i].x > vector[i].y)
		{
			std::cout << vector[i].y << " " << vector[i].x << std::endl;
		}

		else
		{
			std::cout << vector[i].x << " " << vector[i].y << std::endl;
		}
	}

	return 0;
}