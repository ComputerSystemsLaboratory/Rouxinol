#include<iostream>

using namespace std;

int main()
{
	for (int a = 0; a == 0;)
	{
		int price;
		int oturi;
		int count = 0;
		cin >> price;

		oturi = 1000 - price;

		if (price != 0)
		{
			while (oturi > 0)
			{
				if (oturi >= 500)
				{
					count++;
					oturi -= 500;
				}
				else if (oturi >= 100)
				{
					count++;
					oturi -= 100;
				}
				else if (oturi >= 50)
				{
					count++;
					oturi -= 50;
				}
				else if (oturi >= 10)
				{
					count++;
					oturi -= 10;
				}
				else if (oturi >= 5)
				{
					count++;
					oturi -= 5;
				}
				else if (oturi >= 1)
				{
					count++;
					oturi -= 1;
				}
			}
			cout << count << endl;
		}
		else
		{
			break;
		}

	}
	
	return 0;
}