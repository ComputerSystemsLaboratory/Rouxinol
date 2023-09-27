#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cstring>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>

using namespace std;

static const double EPS = 1e-9;
typedef long long ll;
typedef pair<int, int> paii;
typedef complex<double> P;

double ccw(P& p1, P& p2, P& p3)
{
	return ((p2.real() - p1.real())*(p3.imag() - p1.imag()) 
				- (p2.imag() - p1.imag())*(p3.real() - p1.real())) > 0;
}// ccw>0 ...ccw, ccw=0 ...colinear, ccw<0 ...cw

int main()
{
	double x, y;
	P p1, p2, p3, px;
	
	while(cin >> x, !cin.eof())
	{
		cin >> y;
		p1 = P(x, y);
		cin >> x >> y;
		p2 = P(x, y);
		cin >> x >> y;
		p3 = P(x, y);
		cin >> x >> y;
		px = P(x, y);
		
		if(( ccw(p1, p2, px) > 0 && ccw(p2, p3, px) > 0 && ccw(p3, p1, px) > 0)
			||( ccw(p1, p3, px) > 0 && ccw(p3, p2, px) > 0 && ccw(p2, p1, px) > 0))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	
	return 0;
}