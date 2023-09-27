#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<functional>
#include<vector>
#include<math.h>

using namespace std;

typedef long long int lli;

int main()
{
	double x1, x2, x3, xp;
	double y1, y2, y3, yp;
	double abc[3];
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
		abc[0] = (x3 - x2)*(yp - y2) - (y3 - y2)*(xp - x2);
		abc[1] = (x1 - x3)*(yp - y3) - (y1 - y3)*(xp - x3);
		abc[2] = (x2 - x1)*(yp - y1) - (y2 - y1)*(xp - x1);
		if ((abc[0] > 0 && abc[1] > 0 && abc[2] > 0) || (abc[0] < 0 && abc[1] < 0 && abc[2] < 0)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}