#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

	int n;
	int num[10];
	int pos;
	cin >> n;
	while (n-- > 0)
	{
		int min_A = 0, min_B = 0;
		for (int i = 0; i < 10; i++)
		{
			cin >> num[i];
		}
		for (pos = 0; pos < 10; pos++)
		{
			if (num[pos] > min_A)
			{
				min_A = num[pos];
			}
			else if (num[pos] > min_B)
			{
				min_B = num[pos];
			}
			else
			{
				break;
			}
		}
		if (pos == 10)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}