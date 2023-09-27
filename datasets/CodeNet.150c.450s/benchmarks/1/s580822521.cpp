#include <iostream>
#include <algorithm>
using namespace std;

long int table[100005];
long int num[100005];
int n;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	for (int i = 0; i < n; i++)
	{
		table[i] = 9999999999;
	}
	for (int i = 0; i < n; i++)
	{
		*lower_bound(table, table + n, num[i]) = num[i];
	}

	cout << lower_bound(table, table + n, 9999999999) - table << endl;

	return 0;
}