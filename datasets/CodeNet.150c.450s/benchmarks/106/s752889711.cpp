#include "iostream"
#include "string"


int main()
{
	short int a, b, c, ab, divs;
	std::cin >> a >> b >> c;
	ab = b - a;
	divs = 0;

	for (int i = 0; i <= ab; i++)
	{
		if ((c % a) == 0) divs++;
		a++;
	}

	std::cout << divs << std::endl;
    return 0;
}