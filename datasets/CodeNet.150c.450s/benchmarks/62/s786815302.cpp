#include <iostream>

using namespace std;

int main(void)
{
	int x[3];
	int itmp;

	cin >> x[0] >> x[1] >> x[2];

	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			if(x[j] > x[j+1])
			{
				itmp = x[j+1];
				x[j+1] = x[j];
				x[j] = itmp;
			}
		}
	}

	cout << x[0] << " " << x[1] << " " << x[2] << endl;

	return 0;
}