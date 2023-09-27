// 2014/07/21 Tazoe

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for(int i=0; i<n; i++){
		double x1, y1, x2, y2, x3, y3, x4, y4;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

//		int X1 = (int)(x1*100000.0);
//		int Y1 = (int)(y1*100000.0);
//		int X2 = (int)(x2*100000.0);
//		int Y2 = (int)(y2*100000.0);
//		int X3 = (int)(x3*100000.0);
//		int Y3 = (int)(y3*100000.0);
//		int X4 = (int)(x4*100000.0);
//		int Y4 = (int)(y4*100000.0);

//		long long ABX = X2-X1;
//		long long ABY = Y2-Y1;
//		long long CDX = X4-X3;
//		long long CDY = Y4-Y3;

		double abx = x2-x1;
		double aby = y2-y1;
		double cdx = x4-x3;
		double cdy = y4-y3;

		if(fabs(abx*cdy-aby*cdx)<0.0000000001){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}

	return 0;
}