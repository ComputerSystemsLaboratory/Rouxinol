#include <iostream>
using namespace std;

#define SWAP(a, b) { int x=(a); (a)=(b); (b)=x; }

double left(double x, double y, double r) { return x-r; }
double right(double x, double y, double r) { return x+r; }
double bottom(double x, double y, double r) { return y-r; }
double top(double x, double y, double r) { return y+r; }

int main()
{
	int W, H, x, y, r;
	cin >> W >> H >> x >> y >> r;

	if(left(x,y,r) < 0 || bottom(x,y,r) < 0
		|| right(x,y,r) > W || top(x,y,r) > H)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;

    return 0;
}

