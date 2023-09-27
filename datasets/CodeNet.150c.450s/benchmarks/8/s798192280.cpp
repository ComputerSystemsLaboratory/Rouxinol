#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{	
	int num;
	cin >> num;
	int p1 = 0, p2 = 0;

	for (int i = 0; i < num; i++)
	{
		string w1, w2;
		cin >> w1;
		cin >> w2;

		if (w1 < w2)
			p2 += 3;
		else if (w2 < w1)
			p1 += 3;
		else if (w1 == w2)
		{
			p1++;
			p2++;
		}
	}
	cout << p1 << " " << p2 << endl;


}