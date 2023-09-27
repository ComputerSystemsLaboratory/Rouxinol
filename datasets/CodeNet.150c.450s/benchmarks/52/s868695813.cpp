#include<iostream>
using namespace  std;
int rail[10];
int it = -1;
int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 0)
		{
			cout << rail[it] << endl;
			it--;
		}
		else
		{
			it++;
			rail[it] = n;
		}
	}
	return 0;
}