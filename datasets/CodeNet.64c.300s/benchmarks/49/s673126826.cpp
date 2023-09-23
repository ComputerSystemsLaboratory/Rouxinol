#include <cstdio>
#include <cmath>

namespace
{
	int a, b;
}

int main()
{

	while (std::scanf("%u", &a) != EOF)
	{
		std::scanf("%u", &b);
		std::printf("%u\n", (int)std::log10(a + b) + 1);
	}
	return 0;
}
