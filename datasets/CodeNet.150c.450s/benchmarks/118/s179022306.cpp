#include <iostream>
using namespace std;

int main()
{
	int n,num,state;
	cin >> n;
	for (int l = 0; l < n; l++)
	{
		int day = 333 * 200 + 666 * 195;
		for (int i = 0; i < 3; i++)
		{
			cin >> num;
			switch (i)
			{
			case 0:
				state = (num % 3 == 0) ? 1 : 0 ;
				day -= int((num - 1) / 3) * 200 + ((num - 1) - int((num - 1) / 3)) * 195;
				break;
			case 1:
				if (state == 1)day -= (num - 1) * 20;
				else  day -= (num - 1) * 20 - int((num - 1) / 2);
				break;
			case 2:
				day -= num-1;
				break;
			}
		}
		cout << day << endl;
	}
	return 0;
}