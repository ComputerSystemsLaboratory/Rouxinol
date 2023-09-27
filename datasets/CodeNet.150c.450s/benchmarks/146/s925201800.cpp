#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <complex>
#include <ctime>
#include <cstdlib>

using namespace std;

inline int to_int(string s) {int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string to_str(T x) {ostringstream sout; sout << x; return sout.str();}

typedef long long ll;

int main()
{
	int num;
	double sx1, sy1, sx2, sy2;
	double ex1, ey1, ex2, ey2;

	cin >> num;

	for(int i = 0; i < num; i++)
	{
		cin >> sx1 >> sy1 >> sx2 >> sy2 >> ex1 >> ey1 >> ex2 >> ey2;

		if( (sy2-sy1)/(sx2 - sx1) == (ey2-ey1)/(ex2-ex1))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}