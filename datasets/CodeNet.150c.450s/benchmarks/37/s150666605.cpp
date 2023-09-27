#include <string>
#include <algorithm>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>
#include <iomanip>


using namespace std;


int main(void) {
	int a, b, c, d, e, f;
	float x, y;
	while(cin >> a >> b >> c >> d >> e >> f){
		x = round((float)(c*e - b*f) / (a*e - b*d) * 1000) / 1000;
		y = round((float)(a*f - c*d) / (a*e - b*d) * 1000) / 1000;
		if(abs(x) < 0.0005)x = 0.0;
		if(abs(y) < 0.0005)y = 0.0;
		printf("%.3f %.3f\n", x, y);
	}
}