#include <iostream>

int Judge(int n, int remain, int start)
{
	if (n == 1)
	{
		if (remain < 0)
		{
			return 0;
		}
		if (remain < start)
		{
			return 0;
		}
		if (remain > 9)
		{
			return 0;
		}
		return 1;
	}
	else
	{
		int ret = 0;
		for (int i = start; i < 9; ++i)
		{
			ret += Judge(n - 1, remain - i, i + 1);
		}
		return ret;
	}
}

int main()
{
	int n, s;

	while (std::cin >> n >> s )
	{
		if (n == 0 && s == 0)
		{
			break;
		}
		std::cout << Judge(n, s, 0) << std::endl;
	}

	return 0;
}