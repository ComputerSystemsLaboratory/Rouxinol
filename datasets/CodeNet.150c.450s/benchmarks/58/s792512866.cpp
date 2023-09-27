#include<iostream>
#include<cstdlib>
using namespace std;



int main()
{
	char buffer[20];
	int stac[100], stac_num = 0;
	while (1)
	{
		if (!(cin >> buffer))
			break;
		else if (buffer[0] >= '1' && buffer[0] <= '9')
		{
			stac[stac_num] = atoi(buffer);
			stac_num++;
		}
		else
		{
			switch (buffer[0])
			{
			case '+':
				stac[stac_num - 2] += stac[stac_num - 1];
				break;
			case '*':
				stac[stac_num - 2] *= stac[stac_num - 1];
				break;
			case '-':
				stac[stac_num - 2] -= stac[stac_num - 1];
				break;
			}
			stac_num--;
		}
	}

	cout << stac[0] << endl;
	return 0;
}
