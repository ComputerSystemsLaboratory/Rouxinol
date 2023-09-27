#include <iostream>

using namespace std;

int main()
{
	int h, w;
	while(cin >> h >> w, (h|w))
	{
		int r = h*h + w*w;
		int res_h, res_w, res_r;
		res_r = 10000000;
		for(int p=1; p*p*2<r; p++)
		{
			int q = 1;
			while(p*p+q*q<r || (p*p+q*q==r && p<=h)) q++;
			if(p*p+q*q<res_r)
			{
				res_h = p;
				res_w = q;
				res_r = p*p+q*q;
			}
		}
		cout << res_h << " " << res_w << endl;

	}
}