#include<cctype>
#include<cstdio>


using namespace std;

int main()
{
	char a;
	while (1)
	{
		a = getchar();
		if (islower(a))
		{
			putchar(toupper(a));
		}
		else
		{

			putchar(tolower(a));
		}
		if (a == '\n') break;
	}
	return 0;
}