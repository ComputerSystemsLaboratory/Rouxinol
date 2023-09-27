#include <iostream>
#include <typeinfo>
using namespace std;

int ctoi(char c)
{
	if ('0' <= c && c <= '9')
	{
		return c - '0';
	}
	return 0;
}

int main()
{
	int sum[1001] = {};
	int count = 0;

	while (1)
	{
		char in[1001];
		int i = 0;
		cin.getline(in, sizeof(in));

		if (in[0] == '0')
		{
			break;
		}

		for (i = 0; in[i] != '\0' ; i++)
		{
			sum[count] = sum[count] + ctoi(in[i]);
			/*if (in[i] == '1')
			{
				sum[count] = sum[count] + 1;
			}
			else if (in[i] == '2')
			{
				sum[count] = sum[count] + 2;
			}
			else if (in[i] == '3')
			{
				sum[count] = sum[count] + 3;
			}
			else if (in[i] == '4')
			{
				sum[count] = sum[count] + 4;
			}
			else if (in[i] == '5')
			{
				sum[count] = sum[count] + 5;
			}
			else if (in[i] == '6')
			{
				sum[count] = sum[count] + 6;
			}
			else if (in[i] == '7')
			{
				sum[count] = sum[count] + 7;
			}
			else if (in[i] == '8')
			{
				sum[count] = sum[count] + 8;
			}
			else if (in[i] == '9')
			{
				sum[count] = sum[count] + 9;
			}*/

		}
		count++;
	}
	for (int s = 0; s < count; s++){
		cout << sum[s] << endl;
	}
	return 0;
}