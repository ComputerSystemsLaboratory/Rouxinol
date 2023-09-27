#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>

int main()
{
	std::string x;
	int digitsSum;
	while (1)
	{
		std::cin >> x;
		if (!strcmp(x.c_str(), "0"))
		{
			break;
		}
		digitsSum = 0;
		for (int i = 0; i < x.size(); i++)
		{
			digitsSum += x[i] - '0';
		}
		printf("%d\n", digitsSum);
	}
	return 0;
}