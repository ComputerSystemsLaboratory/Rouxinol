#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &h)
{
	int tmp;
	for (int i = 0; i < h.size() - 1; i++)
	{
		for (int j = 0; j < h.size() - 1 - i; j++)
		{
			if (h[j] < h[j + 1])
			{
				tmp = h[j + 1];
				h[j + 1] = h[j];
				h[j] = tmp;
			}
		}
	}
}

int main()
{
	vector<int> height(10);
	for (int i = 0; i < 10; i++)
	{
		cin >> height[i];
	}
	bubbleSort(height);
	for (int i = 0; i < 3; i++)
	{
		cout << height[i] << endl;
	}
	return 0;
}
