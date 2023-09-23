#include <iostream>
using namespace std;
int main()
{
	int n, time[100] = {0}, i, tmp = 0, max[100] = {0};
	while (cin >> n && !cin.eof())
		time[n-1]++;
	for (i = 0; i < 100; i++)
		if (time[i] > tmp)
			tmp = time[i];
	for (i = 0; i < 100; i++)
		if (time[i] == tmp)
			cout << i+1 << endl;
	return 0;
}