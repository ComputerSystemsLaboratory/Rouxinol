#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int num;
	int input;
	int lst[200000];
	int small;
	int large;
	int maximum;
	cin >> num;
	for(int i = 0; i < num; i++)
	{
		cin >> lst[i];

	}
	maximum = -2000000000;
	small = lst[0];
	large = lst[0];

	for (int i = 1; i < num; i++)
	{
		maximum = max(maximum, lst[i] - small);
		small = min(small, lst[i]);
	}
	cout << maximum << endl;
}