#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
void swap(int &a, int &b);

int main()
{
	int n;
	cin >> n;
	int count = 1;
	while (count <= n)
	{
		int x = count;
		if (x % 3 == 0 || x % 10 == 3)
		{
			cout << " " << x;
			count++;
			continue;
		}

		do
		{
			x /= 10;
			if (x % 10 == 3)
			{
				cout << " " << count;
				break;
			}
			
		} while (x >= 1);
		count++;
	}
	cout << endl;

	//for (int i = 0; i < 200; ++i)
	//{
	//	int x = i;
	//	x /= 10;
	//	if (x)
	//		if (x % 10 == 3)
	//			cout << x << " " << i << endl;
	//}

	return 0;
}


