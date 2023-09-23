#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int x;
	int n=0;

	while (1)
	{
		cin >> a >> b >> c;
		if (a <= b)
			break;
	}

	for (x = a; x <= b; x++){
		if (c%x==0)
			n++;
	}

	cout << n << endl;

	return 0;
}