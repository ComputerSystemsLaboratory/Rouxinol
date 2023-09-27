#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int ary[5];
	for (int i = 0; i < 5; i++) cin >> ary[i];
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (ary[i] < ary[j]) swap(ary[i], ary[j]);
		}
	}
	for (int i = 0; i < 5; i++)
	{
		if (i != 0) cout << " ";
		cout << ary[i];
	}
	cout << endl;

	return 0;
}