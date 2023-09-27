#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	int n;
	string c_taro;
	string c_hanako;
	int s_taro = 0;
	int s_hanako = 0;
	int flag = 0;

	cin >> n;
	for (int i1 = 0; i1 < n; i1++)
	{
		flag = 0;
		cin >> c_taro;
		cin >> c_hanako;
		
		int i2 = 0;
		while (!(c_taro[i2] == '\0' && c_hanako[i2] == '\0'))
		{
			{
				if (c_taro[i2] == '\0')
				{
					s_hanako = s_hanako + 3;
					flag = 1;
					break;
				}
				else if (c_hanako[i2] == '\0')
				{
					s_taro = s_taro + 3;
					flag = 1;
					break;
				}
				if (c_taro[i2] != c_hanako[i2])
				{
					if (c_taro[i2] < c_hanako[i2])
					{
						s_hanako = s_hanako + 3;
						flag = 1;
						break;
					}
					else
					{
						s_taro = s_taro + 3;
						flag = 1;
						break;
					}
				}
				i2++;
			}
		}
		if (flag == 0)
		{
			s_hanako = s_hanako + 1;
			s_taro = s_taro + 1;
		}
	}

	cout << s_taro << ' ' << s_hanako << endl;
	return 0;
}