#include <iostream>
using namespace std;

int main()
{
	double x1,y1,x2,y2,x3,y3,xp,yp;
	double m,n;

	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp)
	{
		m = ((xp - x1) * (y3 - y1) - (yp - y1) * (x3 - x1)) /
                ((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));
 
        n = ((xp - x1) * (y2 - y1) - (yp - y1) * (x2 - x1)) /
                ((x3 - x1) * (y2 - y1) - (x2 - x1) * (y3 - y1));
 
        if(m > 0 && n > 0 && m + n < 1) cout << "YES" << endl;
        else cout << "NO" << endl;
	}

	return 0;
}