#include<iostream>
using namespace std;
int main()
{
	int n;
	while (1)
	{
		cin >> n;
		if (n == 0)
			break;
		int as = 0, bs = 0;
		int ac, bc;
		for (int i = 0; i != n; ++i)
		{
			cin >> ac >> bc;
			if (ac == bc)
				as += ac, bs += bc;
			else if (ac > bc)
				as += ac + bc;
			else
				bs += ac + bc;
		}
		cout << as << " " << bs << endl;
	}
	return 0;
}