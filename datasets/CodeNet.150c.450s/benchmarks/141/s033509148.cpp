// 2014/02/08 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		double x1, y1, x2, y2, x3, y3, xp, yp;
		cin >> x1;
		if(cin.eof())
			break;
		cin >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp;

		double c1 = (x2-x1)*(yp-y2)-(y2-y1)*(xp-x2);
		double c2 = (x3-x2)*(yp-y3)-(y3-y2)*(xp-x3);
		double c3 = (x1-x3)*(yp-y1)-(y1-y3)*(xp-x1);

		if((c1>0.0 && c2>0.0 && c3>0.0) || (c1<0.0 && c2<0.0 && c3<0.0)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}

	return 0;
}