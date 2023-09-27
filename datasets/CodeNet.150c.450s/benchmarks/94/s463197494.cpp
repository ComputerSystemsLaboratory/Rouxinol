#include<iostream>

using namespace std;

int main()
{
	int n, N[100];
	cin >> n;
	for (int i = 0; i < n; i++)cin >> N[i];
	int i = 0, j;
	int flag = 1, v, count = 0;
	while (flag)
	{
		flag = 0;
		for (j = n - 1; j > i; j--)
		{
			if (N[j] < N[j - 1])
			{
				v = N[j];
				N[j] = N[j - 1];
				N[j - 1] = v;
				flag = 1;
				count++;
			}
		}
		i++;
	}
	for (j = 0; j < n - 1; j++)cout << N[j] << " ";
	cout << N[n - 1] << endl << count << endl;
    return 0;
}