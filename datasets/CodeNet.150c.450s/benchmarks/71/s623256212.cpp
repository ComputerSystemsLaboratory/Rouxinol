#include <iostream>

using namespace std;

int main()
{
	int i, j, k ,l;
	int n, sum;
	
	while(cin >> n)
	{
		sum = 0;
		for(i = 0; i < 10; i++)
		{
			for(j = 0; j < 10; j++)
			{
				for(k = 0; k < 10; k++)
				{
					for(l = 0; l < 10; l++)
					{
						if(n == i + j + k + l)
						{
							sum = sum + 1;
						}
					}
				}
			}
		}
		
		cout << sum << endl;
	}

	return 0;
}