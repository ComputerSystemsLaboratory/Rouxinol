#include <iostream>
#include <array>
#include <vector>

int main()
{
	std::vector<int> list_a{};
	std::vector<int> list_b{};
	std::array<bool, 10> a;
	
	int a1, a2, a3, a4;
	int b1, b2, b3, b4;
	int hit = 0, brow = 0;
	while (std::cin >> a1 >> a2 >> a3 >> a4 >> b1 >> b2 >> b3 >> b4)
	{
		hit = 0;
		brow = 0;
		for (auto& val : a)
		{
			val = false;
		}
		list_a.clear();
		list_b.clear();

		a[a1 - 1] = true;
		a[a2 - 1] = true;
		a[a3 - 1] = true;
		a[a4 - 1] = true;

		list_a.push_back(a1);
		list_a.push_back(a2);
		list_a.push_back(a3);
		list_a.push_back(a4);

		list_b.push_back(b1);
		list_b.push_back(b2);
		list_b.push_back(b3);
		list_b.push_back(b4);

		for (int i = 0; i < list_a.size(); ++i )
		{
			if (list_a[i] == list_b[i])
			{
				hit++;
			}
			else
			{
				if ( a[ list_b[i] - 1 ] )
				{
					brow++;
				}
			}
		}
		std::cout << hit << " " << brow << std::endl;
	}

	return 0;
}