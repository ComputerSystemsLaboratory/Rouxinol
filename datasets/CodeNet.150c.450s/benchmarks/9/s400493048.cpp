#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	//?????°?????????
	string in;
	string out[100] = {};
	int kai;
	int mai;
	int count = 0;

	//?????£?????????
	while (1)
	{
		cin >> in;
		if (in == "-")
		{
			break;
		}
		cin >> kai;
		for (int i1 = 0; i1 < kai; i1++)
		{
			cin >> mai;
			for (int i2 = 0; i2 < mai; i2++)
			{
				in += in[0];
				in.erase(0,1);
			}
		}
		out[count] = in;
		count++;
	}

	//????????¨???
	for (int i3 = 0; i3 < count; i3++)
	{
		cout << out[i3] << endl;
	}
	return 0;
}