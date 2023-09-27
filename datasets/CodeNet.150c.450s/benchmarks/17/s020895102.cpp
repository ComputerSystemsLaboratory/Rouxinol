#include<iostream>
using namespace  std;
int main()
{
	int a[5];
	for (int i = 0; i < 5; i++)
		cin >> a[i];
	for (int i = 0; i < 4; i++)
		for (int j = i + 1,t; j < 5; j++)
			if (a[i] < a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	for (int i = 0; i < 5; i++)
	{
		if (i != 0)cout << " ";
		cout << a[i];
	}
	cout << endl;
	return 0;
}