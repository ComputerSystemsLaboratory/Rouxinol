#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
	int row, column;
	std::cin >> row >> column;

	std::vector<std::vector<int>> mat;
	std::vector<int> finalRow;
	for (int r = 0; r < row; ++r)
	{
		std::vector<int> v;
		int total = 0;
		for (int c = 0; c < column; ++c)
		{
			int tmp;
			std::cin >> tmp;
			v.push_back(tmp);
			total += tmp;
		}

		v.push_back(total);
		mat.push_back(v);
	}

	for (int c = 0; c < column; ++c)
	{
		int total = 0;
		for (int r = 0; r < row; ++r)
		{
			total += mat[r][c];
		}

		finalRow.push_back(total);
	}

	int finalRowSum = 0;
	for (size_t i = 0; i < finalRow.size(); ++i)
	{
		finalRowSum += finalRow[i];
	}
	finalRow.push_back(finalRowSum);
	mat.push_back(finalRow);

	for (int r = 0; r < row + 1; ++r)
	{
		for (int c = 0; c < column + 1; ++c)
		{
			std::cout << mat[r][c];
			if (c < column)
			{
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
}
