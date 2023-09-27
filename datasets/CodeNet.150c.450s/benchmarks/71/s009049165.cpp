#include <iostream>

int main(void)
{
	int16_t a = 0;
	int16_t b = 0;
	int16_t c = 0;
	int16_t d = 0;
	int16_t n = 0;
	int16_t count = 0;

	while (std::cin >> n)
	{
		count = 0;
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				for (int k = 0; k < 10; k++)
				{
					for (int l = 0; l < 10; l++)
					{
						if ((i + j + k + l) == n)
						{
							count++;
						}
					}
				}
			}
		}
		std::cout << count << std::endl;
	}

	return 0;
}