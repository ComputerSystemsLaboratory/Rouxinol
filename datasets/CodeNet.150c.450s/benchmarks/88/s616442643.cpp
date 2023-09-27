#include<iostream>
#include<algorithm>
#define MAX 1000000;
using namespace std;

int main()
{
	int h, w;
	while (cin >> h >> w && h != 0 && w != 0)
	{
		int t = (h * h) + (w * w);
		int min_t = MAX;
		int min_h = MAX;
		int min_w = 0;
		for (int ww = 1; ww<= 150; ww++)
		{
			for (int hh = 1; hh  < ww; hh++)
			{
				int a = (hh * hh) + (ww * ww);

				if (a > t && min_t > a)
				{
					min_t = a;
					min_h = hh;
					min_w = ww;
				}
				else if (a == t && hh > h && hh < min_h)
				{
					min_t = a;
					min_h = hh;
					min_w = ww;
				}
				else if (a > t && a == min_t && hh < min_h)
				{
					min_t = a;
					min_h = hh;
					min_w = ww;
				}
			}
		}
		cout << min_h << " " << min_w << endl;
	}
	return 0;
}