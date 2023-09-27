#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N; cin >> N;
	while(N--)
	{
		double x1,x2,x3,x4,y1,y2,y3,y4;
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> x3 >> y3 >> x4 >> y4;

		x2 -= x1; y2 -= y1;
		x4 -= x3; y4 -= y3;


		cout << ( fabs(x2*y4-x4*y2)<1e-10 ? "YES" : "NO") << endl;

	}
}