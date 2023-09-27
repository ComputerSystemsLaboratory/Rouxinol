#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <cstring>
#include <cctype>
#include <sstream>
#include <set>
#include <map>
#include <queue>
#include <complex>
using namespace std;

int main() {
	int n, a, b, c, x;
	while(cin >> n >> a >> b >> c >> x, n|a|b|c|x) {
		int y[n];
		for(int i=0; i<n; i++)
			cin >> y[i];
		int flm=0, pnt=0;
		while(true) {
			if(pnt == 0 && y[0] == x) {
				pnt++;
				if(pnt==n) break;
			}
			flm++;
			if(y[pnt] == (a*x+b)%c) {
				pnt++;
				if(pnt == n) break;
			}
			x = (a*x+b)%c;
			if(flm > 9999) {
				flm = -1;
				break;
			}
		}
		cout << flm << endl;
	}

	return 0;
}