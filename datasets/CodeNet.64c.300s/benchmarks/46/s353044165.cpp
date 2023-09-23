#include <iostream>
using namespace std;
		   
int main()
{
	int max = 1000000;
	bool* pt;
	pt = new bool[max];
	pt[1] = false;
	pt[2] = true;
	for (int i = 3; i < max; i++)
	{
		pt[i] = true;
		if (i % 2 == 0) { pt[i] = false; continue; }
		else {
			for (int l = 3; l*l <= i; l+=2)
			{
				if (i%l == 0) { pt[i] = false; break; }
			}
		}
	}
	while (1)
	{
		int a, d, n, c=0;
		cin >> a >> d >> n;
		if (a == 0&&d==0&&n==0)break;
		for (int i = a;; i += d)
		{
			if (pt[i] == true) { c++; }
			if (c == n) { cout << i << endl; break; }
		}
	}
	return 0;
}