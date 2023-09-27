#include <iostream>
using namespace std;

int main()
{
	int x[200];
	int y[200];
	int num;
	int n, d;
	int xmin, xmax, ymin, ymax;
	
	while (1) {
		cin >> num;
		if (num == 0) {
			break;
		}
		x[0] = 0;
		y[0] = 0;
		for (int i = 1; i < num; i++) {
			cin >> n >> d;
			switch (d) {
				case 0:
					x[i] = x[n] - 1;
					y[i] = y[n]; 
					break;
				case 1:
					x[i] = x[n];
					y[i] = y[n] + 1;
					break;
				case 2:
					x[i] = x[n] + 1;
					y[i] = y[n];
					break;
				case 3:
					x[i] = x[n];
					y[i] = y[n] - 1;
					break;
			}
		}
		xmin = 10000;
		xmax = -10000;
		ymin = 10000;
		ymax = -10000;
		for (int i = 0; i < num; i++) {
			if (x[i] < xmin)
				xmin = x[i];
			if (x[i] > xmax)
				xmax = x[i];
			if (y[i] < ymin)
				ymin = y[i];
			if (y[i] > ymax)
				ymax = y[i];
		}
		cout << xmax - xmin + 1 << " " <<  ymax - ymin + 1 << endl;
	}
	return 0;
}