#include <iostream>
#include <cstdio>
#include <stdio.h>

using namespace std;

int main(void)
{

	int val,count = 0;
	while (cin >> val)
	{
		for (int a = 0; a < 10; a++)
		{
			for (int b = 0; b < 10; b++)
			{
				for (int c = 0; c < 10; c++)
				{
					for (int d = 0; d < 10; d++)
					{
						if (a + b + c + d == val)count++;

					}

				}


			}


		}

		printf("%d\n", count);
		count = 0;

	}

}