#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a = 0, b = 0;
	while (cin >> a)
	{
		b = 0;
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				for (int k = 0; k < 10; k++)
				{
					for (int l = 0; l < 10; l++)
					{
						if (i + j + k + l == a)
						{
							b++;
						}
					}
				}
			}
		}
		cout << b << endl;
	}
	
	return 0;
}