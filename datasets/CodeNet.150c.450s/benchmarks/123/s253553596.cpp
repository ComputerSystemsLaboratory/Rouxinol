#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int vals = 0;

	cin >> vals;
	int count = 0;
	while (cin >> vals)
	{
		int i = 2;
		for (; i*i <= vals; ++i)
		{
			if (vals % i == 0) break;
		}
		if (i * i > vals || vals == 2)  count++;
	}
	cout << count << endl;
	return 0;
}