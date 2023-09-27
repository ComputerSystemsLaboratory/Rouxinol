#include <iostream>
#include <cmath>

using namespace std;

int sq(int x)
{
	return x*x;
}

int getzsq(int h, int w)
{
	return sq(h)+sq(w);
}

int main()
{
	while(1)
	{
		int h, w;
		float z;
		cin >> h >> w;
		if (h==0&&w==0) break;
		float zsq=getzsq(h, w);
		float minzsq=20000;
		int ansh,answ;
		for (int i=1;i<=100;i++)
		{
			int wmin = ceil(sqrt(zsq-sq(i)));
			if ((float)wmin==sqrt(zsq-sq(i))&&(i>h)&&(wmin>i))
			{
				ansh = i;
				answ = wmin;
				break;
			}
			for (int j=max(wmin, i+1);j<=150;j++)
			{
				if((getzsq(i, j)>zsq)&&(getzsq(i, j)<minzsq)&&!(i==h&&j==w))
				{
					minzsq=getzsq(i, j);
					ansh = i;
					answ = j;
					break;
				}
			}
		}
		cout << ansh << " " << answ << endl;
	}
	return 0;
}