#include <iostream>
#include <string>

enum {
	S = 0,
	H,
	C,
	D
};

int main(int argc, char const* argv[])
{
	int card[4][52] = {};
	char output_mark[5] = "SHCD";
	int len, num;
	std::string str;

	std::cin >> len;

	for (size_t i = 0; i < len; i++)
	{
		std::cin >> str >> num;

		if(str == "S")
			card[S][num] = 1;
		else if (str == "H")
			card[H][num] = 1;
		else if (str == "C")
			card[C][num] = 1;
		else if (str == "D")
			card[D][num] = 1;
	}

	for (size_t i = 0; i < 4; i++)
		for (size_t j = 0; j < 13; j++)
			if(card[i][j + 1] != 1)
				std::cout << output_mark[i] << " " << j + 1 << std::endl;

	return 0;
}