#include<iostream>
using namespace std;

int main()
{
	int n, q, time[100000], flag = 1, now = 0;
	char name[100000][15];
	cin >> n >> q;
	for (int i = 0; i < n; i++)
		cin >> name[i] >> time[i];
	while (flag)
	{
		flag = 0;
		for (int i = 0; i < n; i++)
			if (time[i])
			{
				flag++;
				if (time[i] <= q)
				{
					now += time[i];
					time[i] = 0;
					cout << name[i] << " " << now << endl;
				}
				else
				{
					time[i] -= q;
					now += q;
				}
			}
	}

	return 0;
}
