#include<iostream>
using namespace  std;
int main()
{
	int heap[600];
	int h;
	cin >> h;
	for (int i = 0; i < 600; i++)heap[i] = 2000000009;
	for (int i = 1; i <= h; i++)
	{
		cin >> heap[i];
	}

	for (int i = 1; i <= h; i++)
	{
		cout << "node " << i << ": key = " << heap[i] << ", ";
		if (i != 1)
		{
			cout << "parent key = " << heap[i / 2] << ", ";
		}
		if (heap[i * 2] != 2000000009)
		{
			cout << "left key = " << heap[i * 2] << ", ";
		}

		if (heap[i * 2 + 1] != 2000000009)
		{
			cout << "right key = " << heap[i * 2 + 1] << ", ";
		}
		cout << endl;
	}
	return 0;
}