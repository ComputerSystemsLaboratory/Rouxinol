#include<iostream>
using namespace std;
int main()
{
	int sya=100000;
	int i;
	int n,a;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		sya *= 1.05;
		if (sya % 1000 > 0)
		{
			a = sya % 1000;
			sya = sya - a + 1000;
		}
	}
	cout << sya << endl;
	return 0;
}