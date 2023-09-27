#include <iostream>
#include <vector>
using namespace std;

typedef struct{
	double x;
	double y;
}point;

int main()
{
	double x1, x2, x3, y1, y2, y3, xp, yp;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
		vector<bool> vec(3, true);
		point points[] = { { x2 - x1, y2 - y1 }, { x3 - x2, y3 - y2 }, { x1 - x3, y1 - y3 } };
		point p_p[] = { { xp - x2, yp - y2 }, { xp - x3, yp - y3 }, { xp - x1, yp - y1 } };
		for (int i = 0; i < 3; i++){
			if (points[i].x * p_p[i].y - points[i].y * p_p[i].x > 0) vec[i] = false;
		}
		//cout << boolalpha << vec[0] << vec[1] << vec[2] << noboolalpha << endl;
		if (vec[0] * vec[1] * vec[2] || !(vec[0] + vec[1] + vec[2])) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}