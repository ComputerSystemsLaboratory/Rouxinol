#include<iostream>
using namespace std;

int main()
{
	int height[10];
	int TopOfThree[3];

	for (int i = 0; i < 10; i++)
		cin >> height[i];

	for (int i = 0; i < 3; i++)
	{
		int index;
		TopOfThree[i] = height[0];
		for (int j = 1; j < 10 - i; j++)
		{
			if (TopOfThree[i] < height[j])
			{
				TopOfThree[i] = height[j];
				index = j;
			}
		}

		for (int k = index; k < 10 - i; k++)
		{
			if (k == 9 - i)
				height[k] = 0;
			else
				height[k] = height[k + 1];
		}
		cout << TopOfThree[i] << endl;
	}

	int i;
	cin >> i;

	return 0;
}