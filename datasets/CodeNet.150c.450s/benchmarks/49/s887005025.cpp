#include <iostream>

using namespace std;

int main(void)
{

	int num;
	int ave;
	
	while (cin >> num && num != 0 )
	{
		int a[num];
		int sum = 0, max = 0, min = 1000;
		for(int i = 0;i < num; i++)
		{
			cin >> a[i];
			sum += a[i];
			if(a[i] <= min)
				min = a[i];
			if(a[i] >= max)
				max = a[i];
		}
		ave = (sum - max - min) / (num - 2);
		cout << ave << endl;
	}

	return 0;
}
