#include <cstdio>

int main()
{
	char ch;
	int n = 0;

	while ((ch = getchar())!= '0' || n != 0)
	{
		if (ch == '\n')
		{
			printf("%d\n",n);
			n = 0;
		}
		else
		{
			ch &= 0x0F;
			n += ch;
		}
	}
	return 0;
}