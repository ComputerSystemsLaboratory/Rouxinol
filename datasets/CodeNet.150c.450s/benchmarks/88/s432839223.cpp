#include <iostream>
using namespace std;



int main(int argc, char const *argv[])
{
	for(;;)
	{
		int h, w, hhww, th, tw, thhww = 1e9, ah, aw, ahhww = 1e9;
		cin >> h >> w;
		hhww = h * h + w * w;
		if(h == 0 && w == 0) break;

		for (int th = 1; th < 150; ++th)
		{
			for (int tw = th+1; tw <= 150; ++tw)
			{
				thhww = th*th+tw*tw;
				if((hhww < thhww || (hhww == thhww && h < th)) && (thhww < ahhww || (thhww == ahhww && th < ah)))
				{
					ahhww = thhww;
					ah = th;
					aw = tw;
				}
			}
		}

		cout << ah << " " << aw << endl;
	}
	
	return 0;
}