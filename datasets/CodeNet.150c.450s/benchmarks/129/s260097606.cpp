#include <iostream>
#include <vector>

int main()
{
	int r, c;
	std::cin >> r >> c;
	std::vector< std::vector<int> > table;
	table.resize(r + 1);
	for (int i = 0; i <= r; i++)
	{
		table[i].resize(c + 1);
	}
	for (int i = 0; i < r; i++)
	{
		int rowTotal = 0;
		for (int j = 0; j < c; j++)
		{
			int data;
			std::cin >> data;
			table[i][j] = data;
			rowTotal += data;
		}
		table[i][c] = rowTotal;
	}
	for (int j = 0; j <= c; j++)
	{
		int columnTotal = 0;
		for (int i = 0; i < r; i++)
		{
			columnTotal += table[i][j];
		}
		table[r][j] = columnTotal;
	}
	for (int i = 0; i <= r; i++)
	{
		for (int j = 0; j <= c; j++)
		{
			if (j > 0)
			{
				std::cout << " ";
			}
			std::cout << table[i][j];
		}
		std::cout << '\n';
	}
	return 0;
}