#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
#include <numeric>
#include <ctype.h>
#include <cstdlib>
#include <string.h>
#include <cmath>
#include <cstdio>





using namespace std;


int main()
{
	int count = 0, num;

	

	while (cin >> num)
	{
		count = 0;

		for (int a = 0; a < 10; a++)
		{
			for (int b = 0; b < 10; b++)
			{
				for (int c = 0; c < 10; c++)
				{
					for (int d = 0; d < 10; d++)
					{
						if (a + b + c + d == num)
							count++;
					}
				}
			}
		}
		cout << count << endl;
	}

	

}