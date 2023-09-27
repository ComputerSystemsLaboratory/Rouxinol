#include <iostream>

int getMarkIdx(char mark);
char getMark(int markIdx);

int main(int argc, char** argv)
{
	int n;
	std::cin >> n;

	unsigned int c[4] = { 0, 0, 0, 0 };
	for (int i = 0; i < n; ++i)
	{
		char mark;
		int rank;
		std::cin >> mark >> rank;
		int markIdx = getMarkIdx(mark);
		if (markIdx >= 0)
		{
			c[markIdx] |= (1U << (rank - 1));
		}
	}

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 13; ++j)
		{
			if ((c[i] & (1U << j)) == 0)
			{
				std::cout << getMark(i) << " " << (j + 1) << std::endl;
			}
		}
	}
}

int getMarkIdx(char mark)
{
	switch (mark)
	{
	case 'S': {return 0; }
	case 'H': {return 1; }
	case 'C': {return 2; }
	case 'D': {return 3; }
	default:break;
	}

	return -1;
}

char getMark(int markIdx)
{
	switch (markIdx)
	{
	case 0: {return 'S'; }
	case 1: {return 'H'; }
	case 2: {return 'C'; }
	case 3: {return 'D'; }
	default:break;
	}

	return '\0';
}
