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
	double x[4], y[4], xp, yp;
	double vx, vy, vpx, vpy;
	double crossZ;
	while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &xp, &yp) != EOF)
	{
		bool ans = true;
		bool prev, sign;
		x[3] = x[0]; y[3] = y[0];
		for(int i = 0; i < 3; i++)
		{
			vx = x[i+1] - x[i];
			vy = y[i+1] - y[i];
			vpx = xp - x[i];
			vpy = yp - y[i];
			//printf("%d: vx=%lf vy=%lf vpx=%lf vpy=%lf\n\n",i,vx,vy,vpx,vpy);
			crossZ = vx * vpy - vy * vpx;
			sign = crossZ>0?true:false;
			//printf("cross = %lf\n", crossZ);
			if(i == 0)
			{
				prev = sign;
			}
			else
			{
				if(prev != sign)
				{
					ans = false;
					break;
				}
			}
		}
		cout << (ans?"YES":"NO") << endl;
	}
}