#include<iostream>

int main()
{
	int N, a, b, c;

	std::cin >> N;
	for (int i = 0; i < N; ++i)
	{
		std::cin >> a >> b >> c;
		a *= a;
		b *= b;
		c *= c;
		if (a == b + c || b == c + a || c == a + b)
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}

	return 0;
}
