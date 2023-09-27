
#include<iostream>
	int n, count = 0;

	void f(int, int, int, int);
	int main()
	{
		while (std::cin >> n){
			count = 0;
			for (int a = 0; a <= 9; a++)
				for (int b = 0; b <= 9; b++)
					for (int c = 0; c <= 9; c++)
						for (int d = 0; d <= 9; d++)
							f(a, b, c, d);

			std::cout << count << std::endl;
		}
		return 0;
	}

	void f(int a, int b, int c, int d)
	{
		if (a + b + c + d == n)
		{
			count++;
		}
	}