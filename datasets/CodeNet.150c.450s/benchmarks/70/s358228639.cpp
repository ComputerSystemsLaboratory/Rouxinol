#include<iostream>
#include<string>
using namespace  std;

int main()
{
	string week[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	int month[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int m, d;
	while (cin >> m >> d && m != 0 || d != 0)
	{
		int w = 3 - 1;
		bool f = false;
		for (int i = 1; i <= 12; i++)
		{
			for (int j = 1; j <= month[i - 1]; j++)
			{
				w = (w + 1) % 7;
				if (i == m && j == d)
				{
					cout << week[w] <<endl;
					f = true;
					break;
				}
			}
			if (f)break;
		}
	}
	return 0;
}