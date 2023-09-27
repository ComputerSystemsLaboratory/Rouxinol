#include<iostream>
using namespace std;

int i = 1, a = 1;

int main()
{
	cin >> a;
	while (a * i != 0)
	{
		cout << "Case " << i << ": " << a << endl;
		i++;
		cin >> a;
	}

	return 0;
}