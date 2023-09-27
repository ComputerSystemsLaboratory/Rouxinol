#include <iostream>
using namespace std;
int main()
{
	int i, j = 0, a, r[2];
	bool s[30] = {false};
	for (i = 0; i < 28; i++)
	{
		cin >> a;
		s[a-1] = true;
	}
	for (i = 0; i < 30; i++)
	{
		if (!s[i])
		{
			r[j] = i+1;
			j++;
		}
	}
	if (r[0] > r[1])
		cout << r[1] << endl << r[0] << endl;
	else
		cout << r[0] << endl << r[1] << endl;
}